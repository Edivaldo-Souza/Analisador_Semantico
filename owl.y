%{
#include <iostream>
#include <cstring>
#include <vector>
using std::cout;

int yylex(void);
int yyparse(void);
void yyerror(const char *);
char* clearString(char*);
int error_count = 0;
int quant_primitiva = 0;
int quant_enumerada = 0;
int quant_definida = 0;
int quant_axioma_fechamento = 0;
int quant_aninhada = 0;
int quant_coberta = 0;

char* currentClass;
char* currentKw;
char* currentProp;
char* currentType;
char* currentLesserKw; 
std::vector<std::string> classesAxioma, dataPropertys, objPropertys;
bool seekingProps, newClass, checkingClasses, semanticErrorFound, keepType = false;
int kwLine;
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
}

class_name: CLASS {
		if(newClass){
			semanticErrorFound = false;
			currentKw = new char[100];
			currentProp = new char[100];
			currentType = new char[100];
			currentLesserKw = new char[100];
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
		}
		if(checkingClasses){
			std::string ctClass(yytext);
			
			bool hasClass = false;
			for(int i = 0; i<classesAxioma.size(); i++){
				if(strcmp(classesAxioma[i].c_str(),yytext)==0){
					hasClass = true;
				}
			}
			if(!hasClass){
				cout << "\nErro Semantico: Classe: "<< ctClass <<" não declarada no axioma de fechamento. Linha "<< kwLine <<"\n";
				semanticErrorFound = true;
				checkingClasses = false;
			}
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

body_prop_subclassof: props_subclass_of keyword_disjoint acept_class keyword_individuals acept_individual {quant_primitiva++;}
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
	if(strcmp("SubClassOf:",currentKw)==0){
		cout << "\nErro de semantica: SubClassOf antes de EquivalentTo. Linha "<< kwLine <<".\n";
	}
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de EquivalentTo. Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de EquivalentTo. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;
keyword_subclass: KEYWORD_SUBCLASSOF {
	seekingProps = true;
	if(strcmp("DisjointClasses:",currentKw)==0){
		cout << "\nErro de semantica: DisjointClasses antes de SubClassOf. Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de SubClassOf. Linha "<< kwLine <<".\n";
	}

	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;
keyword_disjoint: KEYWORD_DISJOINTCLASSES {
	checkingClasses = false;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo . Linha "<< kwLine <<".\n";
	}
	if(strcmp("Individuals:",currentKw)==0){
		cout << "\nErro de semantica: Individuals antes de DisjointClasses. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;
keyword_individuals: KEYWORD_INDIVIDUALS {
	checkingClasses = false;
	if(strcmp("Class:",currentKw)==0){
		cout << "\nErro de semantica: Ausencia dos termos obrigatorios SubClassOf/EquivalentTo no escopo da Classe. Linha "<< kwLine <<".\n";
	}
	
	strcpy(currentKw,yytext);
	kwLine = yylineno;
	}
;

fecha: ABRE_PARENTESES PROP QUANTIFIER class_name FECHA_PARENTESES
	 | ABRE_PARENTESES PROP QUANTIFIER class_name FECHA_PARENTESES keyword fecha
	 | ABRE_PARENTESES PROP QUANTIFIER class_name FECHA_PARENTESES VIRGULA fecha
	 | ABRE_PARENTESES PROP keyword number class_name FECHA_PARENTESES VIRGULA
	 | ABRE_PARENTESES PROP keyword number class_name FECHA_PARENTESES VIRGULA 
	 PROP QUANTIFIER class_name
	 | ABRE_PARENTESES PROP keyword number class_name FECHA_PARENTESES keyword fecha
	 | ABRE_PARENTESES PROP keyword number class_name FECHA_PARENTESES
	 | PROP keyword number class_name VIRGULA fecha
	 | PROP keyword number class_name
	 | PROP QUANTIFIER class_name VIRGULA fecha
	 | PROP axioma_quantifier ABRE_PARENTESES class_or_class FECHA_PARENTESES 

axioma_quantifier: QUANTIFIER {kwLine = yylineno; seekingProps=false;checkingClasses=true;}
;

aux: keyword ABRE_PARENTESES aux FECHA_PARENTESES aux
	| keyword ABRE_PARENTESES aux FECHA_PARENTESES
	| ABRE_PARENTESES aux FECHA_PARENTESES aux
	| PROP QUANTIFIER ABRE_PARENTESES PROP keyword class_name  FECHA_PARENTESES
	| PROP QUANTIFIER class_name
	| PROP QUANTIFIER ABRE_PARENTESES class_or_class  FECHA_PARENTESES 
	| PROP keyword number class_name
	| PROP keyword number type
	| keyword PROP QUANTIFIER ABRE_PARENTESES class_or_class FECHA_PARENTESES aux
	| keyword PROP QUANTIFIER class_name aux
	| keyword PROP keyword number class_name
	| keyword PROP keyword number class_name aux
	;

class_or_class: class_name keyword class_or_class
	 | class_name
	 ;

param:  ABRE_COLCHETES SYMBOL number FECHA_COLCHETES
	;

props_equivalent_to: PROP QUANTIFIER class_name	//DEFINIDA
	 | PROP QUANTIFIER type	 //DEFINIDA						
	 ;

number: NUM {
	if(strcmp(currentType,"xsd:float")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:float. Linha "<< yylineno <<"\n";
	}
	}
	 | FLOAT{
		if(strcmp(currentType,"xsd:integer")==0 ){
		cout << "\nErro Semantico: O valor esperado era do tipo xsd:integer. Linha "<< yylineno <<"\n";
		}
		if(strcmp(currentLesserKw,"min")==0 ||
			strcmp(currentLesserKw,"max")==0 ||
			strcmp(currentLesserKw,"exactly")==0){
				cout << "\nErro Semantico: Apos o operador "<< currentLesserKw<<" espera-se cardinalidade do tipo xsd:integer. Linha "<< yylineno <<"\n";
			}
	}
	;

type: TYPE {
	strcpy(currentType,yytext);
}

keyword: KEYWORD {
	strcpy(currentLesserKw,yytext);

}

props_subclass_of: PROP QUANTIFIER class_name VIRGULA props_subclass_of
	| PROP QUANTIFIER class_name
	| PROP QUANTIFIER type
	| PROP keyword number class_name
	| key_prop
	;
 

key_prop: keyword PROP QUANTIFIER class_name VIRGULA key_prop
	 | keyword PROP QUANTIFIER class_name
	 | keyword PROP keyword number class_name 
	 | keyword PROP keyword number class_name key_prop
	 | keyword PROP keyword number class_name VIRGULA key_prop
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
	cout << "Erros Encontrados: \t"<< error_count<< "\n";
	cout << "Classes Primitivas: \t" << quant_primitiva << "\n";
	cout << "Classes Definidas: \t" << quant_definida << "\n";
	cout << "Classes Enumeradas: \t" << quant_enumerada << "\n";
	cout << "Classes Coberta: \t" << quant_coberta << "\n";
	cout << "Classes com \nAxioma de Fechamento: \t" << quant_axioma_fechamento << "\n";
	cout << "Classes Aninhadas: \t" << quant_aninhada << "\n";
	if(error_count<1){
		cout << "Compilado com Sucesso\n";
	}
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