%{
	/********** C files -- headers, declaration, variable **********/

	#include <stdio.h>
	void showError();
	#define yywrap() 1
	#include <stdlib.h>
	#include <string.h>

	#include "sem2.tab.h"
	
%}


/* tokens */

%%


"integer"	{return INT;}
"real"		{return DOUBLE;}
"text"		{return TEXT;}


"arr"		{return ARR;}



[(]			{return LP;}
[)]			{return RP;}
[{]			{return LB;}
[}]			{return RB;}
"["			{return LI;}
"]"			{return RI;}
[;]			{return SM;}
":"			{return CLN;}
","			{return CM;}
"<-"		{return ASGN;}




[ \n\t]*	;
"/nl/"		{return NL;}



"<add>"		{return ADD;}
"<sub>"		{return SUB;}
"<mul>" 	{return MUL;}
"<div>"		{return DIV;}
"<mod>"		{return MOD;}
"<power>"	{return POWER;}
"<abs>"		{return ABS;}
"<fact>"	{return FACT;}
"<inc>"		{return INC;}
"<dec>"		{return DEC;}




"<equ>"		{return EQU;}
"<grt>"		{return GRT;}
"<les>"		{return LES;}
"<grt_equ>"	{return GRT_EQU;}
"<les_equ>"	{return LES_EQU;}
"<not_equ>"	{return NOT_EQU;}

"<or>"		{return OR;}
"<and>"		{return AND;}
"<not>"		{return NOT;}




"#start#"	{return STRT;}
"#end#"		{return END;}
"print"		{return PRINT;}





"if"		{return IF;}
"or if"		{return ELIF;}
"else"		{return ELSE;}
"switch"	{return SWITCH;}
"case"		{return CASE;}
"break"		{return BRK;}
"def"		{return DEFAULT;}





"while"		{return WHILE;}
"do"		{return DO;}

"from"		{return FROM;}
"to"		{return TO;}
"skip"		{return SKIP;}




^\*\*[^\n\r]+					{ 

	yylval.text = strdup(yytext);
	return SLC; 
}



[*][^\*]+[*] 					{ 

	yylval.text = strdup(yytext);
	return MLC; 
}



[a-zA-Z]([a-zA-Z0-9_]){0,14}		{ 

	yylval.text = strdup(yytext);
 	return VAR;
 }  




\'[^'\\\*"]*\' 	{ 

	yylval.text = strdup(yytext);
	// printf("%s\n",yylval);
	return STRING ; 
}


[-]?[0-9]+ 				{
	
	yylval.integer = atoi(yytext); 	
	return INT_NUM;
}

[-]?[0-9]+[.][0-9]+		{

	yylval.real = atof(yytext);
	return REA_NUM;
}


. 			{ yyerror("unknown character.\n"); }

%%