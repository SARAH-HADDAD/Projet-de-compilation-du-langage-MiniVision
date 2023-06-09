%{
#include <stdio.h>
#include <stdlib.h>
#include "syntax.tab.h"
#include "TS.h"
extern int nb_colonne, nb_ligne;
extern YYSTYPE yylval ;
int j;
%}
chiffre [0-9]
IDF [a-zA-Z_][a-zA-Z0-9_]*
COMMENT ^#[^\n]*\n
INT "("[+-]{chiffre}+")"|{chiffre}+
FLOAT "("[+-]({chiffre}+"."{chiffre}+)")"|({chiffre}+"."{chiffre}+)
CHAR ['][^'][']
BOOL "true"|"false"
STRING ["][^"]*["]
%%
import {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);  
  // printf("MotCle_import reconnu \n");
  nb_colonne += yyleng;
  return (token_import);
}
numpy {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);     
  // printf("Mc_numpy reconnu : %s \n", yytext);
  nb_colonne += yyleng;
  yylval.str= strdup (yytext);
  return (token_numpy);
}
"matplotlib.pyplot" {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);    
  // printf("Mc_matplotlib.pyplot reconnu : %s \n", yytext);
  nb_colonne += yyleng;
  yylval.str= strdup (yytext);
  return (token_matplotlib);
}
array {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);    
  // printf("Mc_array reconnu : %s \n", yytext);
  nb_colonne += yyleng;
  return (token_array);
}
imshow {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);    
  // printf("Mc_imshow reconnu : %s \n", yytext);
  nb_colonne += yyleng;
  return (token_imshow);
}
show {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);    
  // printf("Mc_show reconnu : %s \n", yytext);
  nb_colonne += yyleng;
  return (token_show);
}
if {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);   
  // printf("MotCle_if reconnu \n");
  nb_colonne += yyleng;
  return (token_if);
}
else {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);   
  // printf("MotCle_else reconnu \n");
  nb_colonne += yyleng;
  return (token_else); 
}
while {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
  // printf("MotCle_while reconnu \n");
  nb_colonne += yyleng;
  return (token_while); 
}
for {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
  // printf("MotCle_for reconnu \n");
  nb_colonne += yyleng;
  return (token_for); 
}
in {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
  // printf("MotCle_in reconnu \n");
  nb_colonne += yyleng;
  return (token_in); 
}
range {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
  // printf("MotCle_range reconnu \n");
  nb_colonne += yyleng;
  return (token_range); 
}
as {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
  // printf("MotCle_as reconnu \n");
  nb_colonne += yyleng;
  return (token_as); 
}
and {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
  // printf("Operateur logique: and\n");
  nb_colonne += yyleng;
  return (token_and); 
}
or {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
  // printf("Operateur logique: or\n");
  nb_colonne += yyleng;
  return (token_or); 
}
not {
  rechercher (yytext, "mot cle",0,0,1);
  // printf("nb_ligne=%d, nb_colonne=%d : ", nb_ligne, nb_colonne);
  // printf("Operateur logique: not\n");
  nb_colonne += yyleng;
  return (token_not); 
}
{INT} {
    rechercher (yytext, "cst int","INT",atof(yytext),0);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Constante entiere: %s\n", yytext); 
    nb_colonne += yyleng;
    // Remove parentheses from yytext
    size_t textLength = strlen(yytext);
    if (textLength >= 2 && yytext[0] == '(' && yytext[textLength - 1] == ')') {
    yytext[textLength - 1] = '\0'; // Remove closing parenthesis
    yytext++; // Move pointer to remove opening parenthesis
    }
    yylval.integer= atoi(yytext);
    // printf("yylval.integer = %d\n", yylval.integer);
    return (token_constEntiere); 
}
{FLOAT} {
    rechercher (yytext, "cst float","FLOAT",atof(yytext),0); 
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Constante flottante: %s\n", yytext); 
    nb_colonne += yyleng;
    // Remove parentheses from yytext
    size_t textLength = strlen(yytext);
    if (textLength >= 2 && yytext[0] == '(' && yytext[textLength - 1] == ')') {
    yytext[textLength - 1] = '\0'; // Remove closing parenthesis
    yytext++; // Move pointer to remove opening parenthesis
    }
    yylval.flottant= atof(yytext);
    return (token_constFlottante); 
}
{CHAR} {
    char myStr[10]="";
    myStr[0] =yytext[1];  
    rechercher (yytext, "cst char","CHAR",atof(myStr),0);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Constante char: %s\n", yytext);
    nb_colonne += yyleng;
    yylval.str=strdup(myStr);
    return (token_constChar); 
}
{BOOL} {
    rechercher (yytext, "cst bool","BOOL",atof(yytext),0);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Constante bool: %s\n", yytext); 
    nb_colonne += yyleng;
    yylval.str=strdup(yytext);
    return (token_constBool); 
}
{STRING} {
    char myStr[100]="";
    for(j=1;j<yyleng-1;j++){myStr[j-1] =yytext[j];}  
    rechercher (yytext, "cst string","STRING",atof(myStr),0);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Constante string: %s\n", yytext); 
    nb_colonne += yyleng;
    yylval.str=strdup(myStr);
    return (token_constString); 
}
"." {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Point reconnu \n"); 
    nb_colonne += yyleng;   
    return (token_Point);
}
"(" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Sep_ParOuvrante reconnu \n"); 
    nb_colonne += yyleng;   
    return (token_ParOuvrante);
}
")" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Sep_ParFermante reconnu \n"); 
    nb_colonne += yyleng;   
    return (token_ParFermante);
}
"[" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Sep_CrochOuvrante reconnu \n"); 
    nb_colonne += yyleng; 
    return (token_CrochOuvrante);
}
"]" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Sep_CrochFermante reconnu \n"); 
    nb_colonne += yyleng; 
    return (token_CrochFermante);
    }
"," {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Sep_virgule reconnu \n"); 
    nb_colonne += yyleng;       
    return (token_virgule);
    }
":" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Sep_Deux_Points reconnu \n"); 
    nb_colonne += yyleng;   
    return (token_Deux_Points);
    }
"%" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Sep_Pourcentage reconnu \n"); 
    nb_colonne += yyleng;   
    yylval.str= strdup (yytext);
    return (token_Pourcentage);
    }
"+" { 
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur arithmetique: +\n"); 
    nb_colonne += yyleng; 
    yylval.str= strdup (yytext);
    return (token_plus);
    }
"-"	{
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Operateur arithmetique: -\n"); 
    nb_colonne += yyleng;
    yylval.str= strdup (yytext);
    return (token_moins);
    }
"*" {
    rechercher (yytext, "separateur",0,0,2); 
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur arithmetique: *\n"); 
    nb_colonne += yyleng;
    yylval.str= strdup (yytext);
    return (token_fois);
    }
"/" {
    rechercher (yytext, "separateur",0,0,2); 
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur arithmetique: /\n"); 
    nb_colonne += yyleng;
    yylval.str= strdup (yytext);
    return (token_divise);
    }
">=" { 
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur de comparaison: >=\n"); 
    nb_colonne += yyleng;
    return (token_superieurEgal);
    }
">"	{
    rechercher (yytext, "separateur",0,0,2); 
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur de comparaison: >\n"); 
    nb_colonne += yyleng;
    return (token_superieur);
    }
"<=" { 
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur de comparaison: <=\n"); 
    nb_colonne += yyleng;
    return (token_inferieurEgal);
    }
"<" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Operateur de comparaison: <\n"); 
    nb_colonne += yyleng;
    return (token_inferieur);
    }
"==" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Operateur de comparaison: ==\n"); 
    nb_colonne += yyleng;
    return (token_egal);
    }
"!=" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne); 
    // printf("Operateur de comparaison: !=\n"); 
    nb_colonne += yyleng;
    return (token_different);
    }
"=" {
    rechercher (yytext, "separateur",0,0,2);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Operateur d'affectation: =\n"); 
    nb_colonne += yyleng;
    return (token_affectation);
    }
{IDF} { 
    rechercher (yytext, "idf"," ",88888,0);
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    if(strlen(yytext)>8){
        printf("Erreur: Identificateur trop long\n");
        exit(1);
        }
        else{
            // printf("Idf reconnue : %s \n",yytext);
            nb_colonne += yyleng;
            yylval.str= strdup (yytext);
            return (token_idf);
            } }
{COMMENT} {
    // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);
    // printf("Commentaire: %s", yytext);
    nb_ligne++; nb_colonne=1;
    // printf("newline \n");
}
"    " { 
  rechercher (yytext, "separateur",0,0,2);
  // printf("ligne=%d, colonne=%d : ", nb_ligne, nb_colonne);   
  nb_colonne += yyleng;	
  // printf ("indentation \n");
  return token_indentation;
}
" " {nb_colonne=nb_colonne+ strlen(yytext);}
"\n" {
    rechercher (yytext, "separateur",0,0,2);
    nb_ligne++; nb_colonne=1;
    // printf("newline \n");
    return token_newline;
    }
. {
    printf("----------------------------------------------------------------------------------\n");
    printf("erreur lexical dans la ligne : %d colonne :%d  : %s\n",nb_ligne,nb_colonne,yytext);
    printf("----------------------------------------------------------------------------------\n");
    nb_colonne=nb_colonne+ strlen(yytext);
    exit(1);
}
%%