%{
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <unordered_map>
using std::cout;

int yylex(void);
int yyparse(void);
void yyerror(const char *);
char* clearString(char*);
int error_count = 0;
int semantic_error_count = 0;
int quant_primitiva = 0;
int quant_enumerada = 0;
int quant_definida = 0;
int quant_axioma_fechamento = 0;
int quant_aninhada = 0;
int quant_coberta = 0;

char* chosenProp;
char* currentClass;
char* currentKw;
char* currentProp;
char* currentType;
char* currentLesserKw; 
std::unordered_map<std::string,std::vector<std::string>> propsAxioma;
std::vector<std::string> classesAxioma, dataPropertys, objPropertys;
bool seekingProps, newClass, checkingClasses, semanticErrorFound, keepType, canVerifyProp, inDisjoint = false;
int kwLine;
int contClasses;
extern char* yytext;
extern int yylineno;

%}

%token CLASS KEYWORD PROP NUM SYMBOL TYPE INDIVIDUAL KEYWORD_CLASS KEYWORD_EQUIVALENTTO KEYWORD_SUBCLASSOF KEYWORD_DISJOINTCLASSES KEYWORD_INDIVIDUALS ABRE_CHAVE FECHA_CHAVE ABRE_COLCHETES FECHA_COLCHETES VIRGULA ABRE_PARENTESES FECHA_PARENTESES QUANTIFIER FLOAT

%%


class: class keyword_class class_name body
	 | keyword_class class_name body
	 | class error body
	 | error body 
     ;

keyword_class: KEYWORD_CLASS{
	newClass = true;
	checkingClasses = false;
	canVerifyProp = false;
	inDisjoint = false;
	contClasses = 0;
	
}
prop_name: PROP {
	canVerifyProp = true;
	strcpy(currentProp,yytext);

}

class_name: CLASS {
		if(newClass){
			semanticErrorFound = false;
			currentKw = new char[100];
			currentProp = new char[100];
			currentType = new char[100];
			currentLesserKw = new char[100];
			chosenProp = new char[100];
			currentClass = new char[strlen(yytext)+1]; 
			strcpy(currentClass,yytext);
			strcpy(currentKw,"Class:");
			kwLine = yylineno;
			cout << "\nClass Atual: "<< currentClass << "\n";
			newClass = false;
		}
		if(seekingProps){
			std::string cl(yytext);
			classesAxioma.push_back(cl);
			
			std::string p(currentProp);
			std::vector<std::string> temp;
			temp.push_back(cl);
			if(propsAxioma.count(p)==0){
				propsAxioma[p] = temp;
			}
			else {
				temp = propsAxioma[p];
				temp.push_back(cl);
				propsAxioma[p] = temp;
			}
			
		}
		if(checkingClasses){
			std::string ctClass(yytext);
			
			std::string prop(chosenProp);
			
			if(propsAxioma.count(prop)==0){
				cout << "\nErro de semantica: Propriedade não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semantic_error_count++;
				semanticErrorFound = true;
				checkingClasses = false;
			}
			else{
				classesAxioma = propsAxioma[prop];
				
				bool hasClass = false;
			for(int i = 0; i<classesAxioma.size(); i++){
				if(strcmp(classesAxioma[i].c_str(),yytext)==0){
					contClasses--;
					hasClass = true;
				}
			}
			if(!hasClass){
				cout << "\nErro de semantica: Classe: "<< ctClass <<" não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semantic_error_count++;
				semanticErrorFound = true;
				checkingClasses = false;
			}
			}

		}

		if(inDisjoint){
			if(strcmp(currentClass,yytext)==0){
				cout << "\nErro de semantica: A classe "<< currentClass <<" nao pode ser disjunta de si mesma. Linha "<< yylineno <<"\n";
				semantic_error_count++;
			}
		}

		std::string prop1(currentProp);
		if(!inDisjoint){
			if(count(dataPropertys.begin(),dataPropertys.end(),prop1)>0){
				cout << "\nErro Semantico: Tentativa de atribuicao de objeto a DataPropety "<<currentProp<<". Linha "<< yylineno <<"\n";
				currentProp = new char[100];
				semanticErrorFound = true;
				semantic_error_count++;
			}
		}
		

		std::string prop(currentProp);
		int quant = count(objPropertys.begin(),objPropertys.end(),prop);
		int quant_d = count(dataPropertys.begin(),dataPropertys.end(),prop);
		if(quant==0 && quant_d==0 && !prop.empty() && canVerifyProp){
			objPropertys.push_back(prop);
		}
		
	}

;

body: keyword_subclass body_prop_subclassof 
	 | keyword_equivalent body_prop_equivalentto
	 | keyword_equivalent body_prop_equivalentto keyword_individuals acept_individual
	 | keyword_subclass body_prop_subclassof keyword_disjoint acept_class keyword_individuals acept_individual
	 | keyword_subclass body_prop_subclassof keyword_equivalent body_prop_equivalentto
	 | keyword_subclass body_prop_subclassof keyword_equivalent body_prop_equivalentto keyword_individuals acept_individual
	 | keyword_subclass body_prop_subclassof keyword_equivalent body_prop_equivalentto keyword_disjoint acept_class
	 | keyword_subclass body_prop_subclassof keyword_equivalent body_prop_equivalentto keyword_disjoint acept_class keyword_individuals acept_individual
	 | keyword_subclass body_prop_subclassof keyword_equivalent body_prop_equivalentto keyword_individuals acept_individual keyword_disjoint acept_class
	 | keyword_individuals acept_individual keyword_subclass body_prop_subclassof
	 | keyword_disjoint acept_class keyword_subclass body_prop_subclassof
	 | keyword_individuals acept_individual keyword_equivalent body_prop_equivalentto
	 | keyword_disjoint acept_class keyword_equivalent body_prop_equivalentto
	 | keyword_individuals acept_individual
	 | keyword_disjoint acept_class
    ;

body_prop_subclassof: props_subclass_of  {quant_primitiva++;}
					| class_name VIRGULA props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual {quant_primitiva++;}
					| class_name VIRGULA props_subclass_of {quant_primitiva++;}
					| class_name VIRGULA props_subclass_of keyword_disjoint acept_class {quant_primitiva++;}
					| class_name VIRGULA fecha {quant_axioma_fechamento++;}
					| class_name {quant_aninhada++;}
					| class_name aux{quant_aninhada++;}
					;
			

body_prop_equivalentto: ABRE_CHAVE acept_individual FECHA_CHAVE {quant_enumerada++;}
					  | class_name keyword ABRE_PARENTESES props_equivalent_to FECHA_PARENTESES keyword_individuals acept_individual {quant_definida++;}
					  | class_name keyword ABRE_PARENTESES props_equivalent_to param FECHA_PARENTESES {quant_definida++;}
					  | class_name keyword props_equivalent_to {quant_definida++;}
					  | class_or_class {quant_coberta++;}
					  | class_name aux {quant_aninhada++;}
					  | class_or_class KEYWORD_SUBCLASSOF class_name {quant_aninhada++;}
					  ;

keyword_equivalent: KEYWORD_EQUIVALENTTO {
	checkingClasses = false;
	currentProp = new char[100];
	if(strcmp("SubClassOf:",currentKw)==0){
		cout << "\nErro de semantica: SubClassOf antes de EquivalentTo. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de EquivalentTo. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de EquivalentTo. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;
keyword_subclass: KEYWORD_SUBCLASSOF {
	seekingProps = true;
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de SubClassOf. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de SubClassOf. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}

	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;
keyword_disjoint: KEYWORD_DISJOINTCLASSES {
	checkingClasses = false;
	inDisjoint = true;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da classe. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de DisjointClasses. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;
keyword_individuals: KEYWORD_INDIVIDUALS {
	checkingClasses = false;
	inDisjoint = false;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da Classe. Linha "<< kwLine <<".\n";
		semanticErrorFound = true;
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;

fecha: ABRE_PARENTESES prop_name QUANTIFIER class_name FECHA_PARENTESES
	 | ABRE_PARENTESES prop_name QUANTIFIER class_name FECHA_PARENTESES keyword fecha
	 | ABRE_PARENTESES prop_name QUANTIFIER class_name FECHA_PARENTESES VIRGULA fecha
	 | ABRE_PARENTESES prop_name keyword number class_name FECHA_PARENTESES VIRGULA
	 | ABRE_PARENTESES prop_name keyword number class_name FECHA_PARENTESES VIRGULA 
	 prop_name QUANTIFIER class_name
	 | ABRE_PARENTESES prop_name keyword number class_name FECHA_PARENTESES keyword fecha
	 | ABRE_PARENTESES prop_name keyword number class_name FECHA_PARENTESES
	 | prop_name keyword number class_name VIRGULA fecha
	 | prop_name keyword number class_name
	 | prop_name QUANTIFIER class_name VIRGULA fecha
	 | prop_name axioma_quantifier ABRE_PARENTESES class_or_class FECHA_PARENTESES {
		if(contClasses>0){
			cout << "\nErro de semantica: Ausencia classes declaradas no axioma de fechamento. Linha "<< kwLine <<"\n";
			semantic_error_count++;
			semanticErrorFound = true;
			checkingClasses = false;
	 }}

axioma_quantifier: QUANTIFIER {
	kwLine = yylineno; 
	seekingProps=false;
	checkingClasses=true;

	strcpy(chosenProp,currentProp);
	std::string prop(chosenProp);
	contClasses = propsAxioma[prop].size();	
	}
;

aux: keyword ABRE_PARENTESES aux FECHA_PARENTESES aux
	| keyword ABRE_PARENTESES aux FECHA_PARENTESES
	| ABRE_PARENTESES aux FECHA_PARENTESES aux
	| prop_name QUANTIFIER ABRE_PARENTESES prop_name keyword class_name  FECHA_PARENTESES
	| prop_name QUANTIFIER type
	| prop_name QUANTIFIER class_name
	| prop_name QUANTIFIER ABRE_PARENTESES class_or_class  FECHA_PARENTESES 
	| prop_name keyword number class_name
	| prop_name keyword number type
	| keyword prop_name QUANTIFIER ABRE_PARENTESES class_or_class FECHA_PARENTESES aux
	| keyword prop_name QUANTIFIER class_name aux
	| keyword prop_name keyword number class_name
	| keyword prop_name keyword number class_name aux
	;

class_or_class: class_name keyword class_or_class
	 | class_name
	 ;

param:  ABRE_COLCHETES SYMBOL number FECHA_COLCHETES
	;

props_equivalent_to: prop_name QUANTIFIER class_name	//DEFINIDA
	 | prop_name QUANTIFIER type	 //DEFINIDA						
	 ;

number: NUM {
	if(strcmp(currentType,"xsd:float")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:float. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;

	}
	}
	 | FLOAT{
		if(strcmp(currentType,"xsd:integer")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;
		}
		if(strcmp(currentLesserKw,"min")==0 ||
			strcmp(currentLesserKw,"max")==0 ||
			strcmp(currentLesserKw,"exactly")==0){
				cout << "\nErro Semantico: Apos o operador "<< currentLesserKw<<" espera-se cardinalidade do tipo xsd:integer. Linha "<< yylineno <<"\n";
				semanticErrorFound = true;
				semantic_error_count++;
			}
	}
	| PROP{
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		semanticErrorFound = true;
		semantic_error_count++;
	}
	;

type: TYPE {
	strcpy(currentType,yytext);
	std::string prop1(currentProp);
	if(!inDisjoint){
		if(count(objPropertys.begin(),objPropertys.end(),prop1)>0){
		cout << "\nErro Semantico: Tentativa de atribuicao de tipo a ObjectPropety "<<currentProp<<". Linha "<< yylineno <<"\n";
		currentProp = new char[100];
		semanticErrorFound = true;
		semantic_error_count++;
	}
	}
	

	std::string prop(currentProp);
		int quant = count(dataPropertys.begin(),dataPropertys.end(),prop);
		int quant_o = count(objPropertys.begin(),objPropertys.end(),prop);
		if(quant==0 && quant_o==0 && !prop.empty()){
			dataPropertys.push_back(prop);
	}
}

keyword: KEYWORD {
	strcpy(currentLesserKw,yytext);

}

props_subclass_of: prop_name QUANTIFIER class_name VIRGULA props_subclass_of
	| prop_name QUANTIFIER class_name
	| prop_name QUANTIFIER type
	| prop_name keyword number class_name
	| key_prop
	;
 

key_prop: keyword prop_name QUANTIFIER class_name VIRGULA key_prop
	 | keyword prop_name QUANTIFIER class_name
	 | keyword prop_name keyword number class_name 
	 | keyword prop_name keyword number class_name key_prop
	 | keyword prop_name keyword number class_name VIRGULA key_prop
	 ;

acept_class: class_name VIRGULA acept_class
	 | class_name
	 ;

acept_individual: INDIVIDUAL VIRGULA acept_individual
	 | INDIVIDUAL
	 ;

%%

extern FILE * yyin;  

int main(int argc, char ** argv)
{
	if (argc > 1)
	{
		FILE * file;
		file = fopen(argv[1], "r");
		if (!file)
		{
			cout << "Arquivo " << argv[1] << " não encontrado!\n";
			exit(1);
		}
		
		yyin = file;
	}

	yyparse();
	cout << std::endl;
	cout << "--------------Resultados--------------\n";
	cout << "Erros Semanticos Encontrados: \t"<< semantic_error_count<< "\n"; 
	cout << "Erros Sintaticos Encontrados: \t"<< error_count<< "\n";
	
	cout << "\n\tLista de DataProperties:\n";
	for(int i = 0; i<dataPropertys.size(); i++){
		cout << i+1 << "--" << dataPropertys[i] << "\n";
	}
	cout << "Total de DataProperties: " << dataPropertys.size() << ".\n\n";
	cout << "\tLista de ObjectProperties:\n";
	for(int i = 0; i<objPropertys.size(); i++){
		cout << i+1 << "--" << objPropertys[i] << "\n";
	}
	cout << "Total de ObjectProperties: " << objPropertys.size() << ".\n\n";

	if(error_count<1 && semantic_error_count<1){
		cout << "Compilado com Sucesso\n";
		cout << "Classes Primitivas: \t" << quant_primitiva << "\n";
		cout << "Classes Definidas: \t" << quant_definida << "\n";
		cout << "Classes Enumeradas: \t" << quant_enumerada << "\n";
		cout << "Classes Coberta: \t" << quant_coberta << "\n";
		cout << "Classes com \nAxioma de Fechamento: \t" << quant_axioma_fechamento << "\n";
		cout << "Classes Aninhadas: \t" << quant_aninhada << "\n";
	}
	else cout << "Compilacao Falhou\n";
}

void yyerror(const char * s)
{
	extern int yylineno;    
	extern char * yytext;   

	if(!semanticErrorFound){
		error_count++;
		cout << "\n";
    	cout << "Erro de Sintaxe: *"<< yytext <<"*, linha " << yylineno << "\n";
	}
	
}