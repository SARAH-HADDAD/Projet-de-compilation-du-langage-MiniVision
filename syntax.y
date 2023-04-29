%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int nb_ligne=1,nb_colonne=1;

int yylex(void);
void yyerror (const char *str) {
    fprintf (stderr, "error: %s\n", str);
}
int yywrap(void);
%}
%union{
  int integer; 
  char*  charactere;
  float flottant;
  char* boolean;
}
%token token_import token_numpy token_matplotlib
%token token_if token_else token_while token_for token_in token_range
%token token_int token_float token_char token_bool token_as
%token token_and token_or token_not
%token <integer> token_constEntiere
%token <flottant> token_constFlottante
%token <charactere> token_constChar
%token <boolean> token_constBool
%token token_idf
%token token_ParOuvrante token_ParFermante token_CrochOuvrante token_CrochFermante
%token token_virgule token_Deux_Points 
%token token_plus token_moins token_fois token_divise token_Pourcentage
%token token_superieurEgal token_superieur token_inferieurEgal token_inferieur token_egal token_different
%token token_affectation
%token token_Point
%token token_indentation token_newline
%start S
%left token_not
%left token_and
%left token_or
%left token_inferieur token_inferieurEgal token_superieur token_superieurEgal token_egal token_different
%left token_ParOuvrante token_ParFermante
%left token_fois token_divise token_Pourcentage
%left token_plus token_moins
%left token_constEntiere token_constFlottante token_constChar token_constBool token_idf
%%
S: PROGRAM {printf("prog syntaxiquement correct\n");YYACCEPT;}

PROGRAM : LISTE_IMPORT LIST_DECLARATION LIST_INST;

LISTE_IMPORT:  LISTE_IMPORT IMPORT| /*vide*/;
IMPORT : token_import module_name token_newline
| token_import module_name token_as token_idf token_newline;

module_name: token_numpy | token_matplotlib; 

LIST_DECLARATION :  LIST_DECLARATION DECLARATION_TABLEAU| /*vide*/;
DECLARATION_TABLEAU : token_idf token_affectation token_CrochOuvrante LIST_EXPRESSION token_CrochFermante token_newline
|token_idf token_affectation token_CrochOuvrante  token_CrochFermante token_newline
|token_idf token_affectation token_CrochOuvrante LIST_TABLEAU token_CrochFermante token_newline;      

LIST_EXPRESSION: EXPRESSION | EXPRESSION token_virgule LIST_EXPRESSION ;

LIST_TABLEAU: token_CrochOuvrante LIST_EXPRESSION token_CrochFermante token_virgule LIST_TABLEAU 
| token_CrochOuvrante LIST_EXPRESSION token_CrochFermante;
// INSTRUCTION :BOUCLE INSTRUCTION |AFFECTATION INSTRUCTION |ENTREES INSTRUCTION | Sortie INSTRUCTION |IF_STATEMENT INSTRUCTION| ;
LIST_INST: INSTRUCTION | INSTRUCTION LIST_INST;
// | ENTREES | Sortie
INSTRUCTION : AFFECTATION | BOUCLE_FOR1|BOUCLE_FOR2|BOUCLE_WHILE |IF_STATEMENT;
AFFECTATION : token_idf token_affectation EXPRESSION token_newline;
BOUCLE_FOR1:token_for token_idf token_in token_range token_ParOuvrante EXPRESSION token_virgule EXPRESSION token_ParFermante token_Deux_Points token_newline LISTE_INSTRUCTION_BOUCLE
|token_for token_idf token_in token_range token_ParOuvrante EXPRESSION token_ParFermante token_Deux_Points token_newline LISTE_INSTRUCTION_BOUCLE;
BOUCLE_FOR2:token_for token_idf token_in token_idf token_Deux_Points token_newline LISTE_INSTRUCTION_BOUCLE;
BOUCLE_WHILE:token_while token_ParOuvrante EXPRESSION token_ParFermante token_Deux_Points token_newline LISTE_INSTRUCTION_BOUCLE;
IF_STATEMENT: token_if token_ParOuvrante EXPRESSION token_ParFermante token_Deux_Points token_newline LISTE_INSTRUCTION_BOUCLE;
//LISTE_ELSE: token_else token_Deux_Points token_newline LISTE_INSTRUCTION_BOUCLE | /*vide*/;
LISTE_INSTRUCTION_BOUCLE: LISTE_INSTRUCTION_BOUCLE token_indentation INSTRUCTION token_newline | /*vide*/; 
EXPRESSION: token_idf| token_constBool|token_constChar |token_constEntiere | token_constFlottante;

%%

int main(){
    yyparse(); // analyseur lexical
    yywrap(); // analyseur syntaxique
    return 0;}




