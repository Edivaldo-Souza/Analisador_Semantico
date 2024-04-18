%{
#include <iostream>
#include <cstring>
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

char* currentKeyWord;
extern char* yytext;
extern int yylineno;

%}

%token CLASS KEYWORD PROP NUM SYMBOL TYPE INDIVIDUAL KEYWORD_CLASS KEYWORD_EQUIVALENTTO KEYWORD_SUBCLASSOF KEYWORD_DISJOINTCLASSES KEYWORD_INDIVIDUALS ABRE_CHAVE FECHA_CHAVE ABRE_COLCHETES FECHA_COLCHETES VIRGULA ABRE_PARENTESES FECHA_PARENTESES QUANTIFIER

%%

stmnt: stmnt class
	 | class
	 //| error class {yyclearin;}		     
	 ;

class: class keyword_class CLASS body
	 | keyword_class CLASS body 
     ;

keyword_class: KEYWORD_CLASS { 
	currentKeyWord = yytext;
	//cout << "\nCurrent kw: "<< clearString(currentKeyWord) << "\n";
	}
;

body: keyword_subclass body_prop_subclassof 
	 | keyword_equivalent body_prop_equivalentto
	 | keyword_subclass body_prop_subclassof keyword_equivalent body_prop_equivalentto {
		
		cout << "\n/---------------------------------------------------------------------------/\n";
		cout << "Erro de semantica: SubClassOf antes de EquivalentTo. Linha "<< yylineno <<".\n";
		cout << "/-----------------------------------------------------------------------------/\n";
	 }
	 | 
    ;

body_prop_subclassof: body_prop {quant_primitiva++;}
					| CLASS VIRGULA body_prop {quant_axioma_fechamento++;}
					| CLASS {quant_aninhada++;}
					;

body_prop_equivalentto: ABRE_CHAVE acept_individual FECHA_CHAVE {quant_enumerada++;}
					  | CLASS KEYWORD ABRE_PARENTESES body_prop FECHA_PARENTESES KEYWORD_INDIVIDUALS acept_individual {quant_definida++;}
					  | CLASS KEYWORD ABRE_PARENTESES body_prop param FECHA_PARENTESES {quant_definida++;}
					  | CLASS KEYWORD body_prop {quant_definida++;}
					  | class_or_class {quant_coberta++;}
					  | CLASS KEYWORD aux {quant_aninhada++;}
					  | class_or_class KEYWORD_SUBCLASSOF CLASS {quant_aninhada++;}
					  ;

keyword_equivalent: KEYWORD_EQUIVALENTTO 
;
keyword_subclass: KEYWORD_SUBCLASSOF
;
keyword_disjoint: KEYWORD_DISJOINTCLASSES
;
keyword_individuals: KEYWORD_INDIVIDUALS
;

aux: ABRE_PARENTESES body_prop FECHA_PARENTESES aux
	 | ABRE_PARENTESES body_prop FECHA_PARENTESES
	 | KEYWORD ABRE_PARENTESES body_prop FECHA_PARENTESES aux
	 | KEYWORD ABRE_PARENTESES body_prop FECHA_PARENTESES
	 | PROP QUANTIFIER aux
	 ;

class_or_class: CLASS KEYWORD class_or_class
	 | CLASS
	 ;

param:  ABRE_COLCHETES SYMBOL NUM FECHA_COLCHETES
	;

body_prop: PROP KEYWORD CLASS VIRGULA body_prop
	 | PROP KEYWORD TYPE
	 | PROP KEYWORD CLASS
	 | PROP KEYWORD NUM  CLASS	//Teste
	 | PROP KEYWORD NUM  CLASS KEYWORD body_prop	//Teste
	 | PROP KEYWORD NUM CLASS VIRGULA body_prop	//Teste
	 | PROP KEYWORD ABRE_PARENTESES class_or_class FECHA_PARENTESES VIRGULA
	 | PROP KEYWORD ABRE_PARENTESES class_or_class FECHA_PARENTESES
	 | PROP QUANTIFIER CLASS VIRGULA body_prop
	 | PROP QUANTIFIER CLASS
	 | PROP QUANTIFIER CLASS KEYWORD body_prop
	 | PROP QUANTIFIER CLASS VIRGULA body_prop keyword_disjoint acept_class
	 | PROP QUANTIFIER CLASS VIRGULA body_prop keyword_disjoint acept_class keyword_individuals acept_individual
	 | PROP QUANTIFIER TYPE
	 | PROP QUANTIFIER ABRE_PARENTESES class_or_class FECHA_PARENTESES
	 | PROP QUANTIFIER ABRE_PARENTESES class_or_class FECHA_PARENTESES KEYWORD body_prop
	 | PROP QUANTIFIER body_prop
	 | ABRE_PARENTESES body_prop FECHA_PARENTESES VIRGULA body_prop
	 | ABRE_PARENTESES body_prop FECHA_PARENTESES KEYWORD body_prop
	 | ABRE_PARENTESES body_prop FECHA_PARENTESES
	 | key_prop
	 ;

key_prop: KEYWORD PROP QUANTIFIER CLASS VIRGULA key_prop
	 | KEYWORD PROP QUANTIFIER CLASS
	 | KEYWORD PROP KEYWORD NUM CLASS 
	 | KEYWORD PROP KEYWORD NUM CLASS key_prop
	 | KEYWORD PROP KEYWORD NUM CLASS VIRGULA key_prop
	 ;

acept_class: CLASS VIRGULA acept_class
	 | CLASS
	 ;

acept_individual: INDIVIDUAL VIRGULA acept_individual
	 | INDIVIDUAL
	 ;

%%

char* clearString(char* s){
	char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
	return d;
}

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

void printText(){
	extern char * yytext;

	cout << "YYTEXT: " << yytext <<"\n";
}

void yyerror(const char * s)
{
	extern int yylineno;    
	extern char * yytext;   

	error_count++;
	cout << "\n";
    cout << "Erro de Sintaxe: *"<< yytext <<"*, linha " << yylineno << "\n";
	
}