/* c declaration */

%{

# include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>


int yylex(void);

char var[500][16];

int sym_int[500];
double sym_real[500];
char * sym_text[500];

int arr_int[10000];
double arr_real[10000];

int in_use[500];
/*
bool in_use_int[500];
bool in_use_real[500];
bool in_use_char[500];
*/

int tos = 0, ail=0, arl=0 ;

int i,k=0,l,r;

int check_var(char* v)
{
  for(i=0; i<tos; i++)
  {
    if( strcmp(v,var[i]) == 0 ){
      return i;
    }
  }
  return -1;
}

int elif[11] ;
int el = 0, d = 0 ;

int swt[11] ;
int op, cs = 0, n = 0;

%}

%error-verbose

/* ----------------------------------DATA TYPE--------------------------------------*/

%union{
  int integer;
  double real;
  char * text;
}


/* -----------------------------------bison declaration--------------------------------------- */

%token            INT DOUBLE TEXT ARR LP RP LB RB SM CLN CM ASGN ADD SUB MUL DIV MOD POWER ABS FACT INC DEC EQU GRT LES GRT_EQU LES_EQU NOT_EQU OR AND %token            NOT STRT END PRINT IF ELIF ELSE SWITCH CASE BRK DEFAULT WHILE DO FROM TO SKIP VAR INT_NUM REA_NUM STRING LI RI SLC MLC NL

%type <integer>   LP RP LB RB SM CLN CM ASGN ADD SUB MUL DIV MOD POWER ABS FACT INC DEC EQU GRT LES GRT_EQU LES_EQU NOT_EQU OR AND NOT STRT END PRINT IF %type <integer>   ELIF ELSE SWITCH CASE BRK DEFAULT WHILE DO FROM TO SKIP INT_NUM program stmts stmt declaration special cond_stmts if_stmt if_else_stmt
%type <integer>   if_elif_stmt elif_stmts elif_stmt elifel_stmt assignment asgn_stmt int_ids real_ids text_ids for_loop while_loop switch_stmts case_stmts
%type <integer>   case_stmt def_stmt sw_expr array_int array_real assign_array NL

%type <real>      REA_NUM expr

%type <text>      VAR STRING INT DOUBLE TEXT SLC MLC

%nonassoc IF
%nonassoc ELIF
%nonassoc ELSE
%right ASGN
%left ABS
%left FACT
%left ADD 
%left SUB
%left MUL 
%left DIV
%left MOD
%left POWER
%left INC 
%left DEC
%left NOT
%left LES
%left GRT
%left LES_EQU
%left GRT_EQU
%left EQU
%left NOT_EQU
%left OR 
%left AND
%left LB RB
%left LP RP

/* ----------------------------------The semantics-------------------------------- */

%%

program: STRT stmts END 		{ printf("\nCompiled Successfully.\n"); }
;
stmts: stmt                     /*{ printf("\nStatement Ran Successfully.\n"); }*/
| stmts stmt                    /*{ printf("\nAll Statements Ran Successfully.\n"); }*/
;

stmt: SM
| SLC                           {
  printf("\nSingle Line Comment: %s\n\n", $1);
}
| MLC                           {
  printf("\nMulti Line Comment: %s\n\n" , $1);
}
| NL                        {printf("\n");}
| declaration SM 					 /*{ printf("\nSuccessful Declaration\n"); }*/
| assignment SM            /*{ printf("\nSuccessful Assignment\n"); }*/
| expr SM                  /*{ printf("%lf\n",$1); }*/
| special SM
| assign_array SM

;

declaration: INT int_ids 			{ printf("Successful Integer Declaration.\n"); }
|DOUBLE real_ids					    { printf("Successful Real Number Declaration.\n"); }
|TEXT text_ids                { printf("Successful Text Declaration.\n"); }
|array_int                    { printf("Successful Integer Array Declaration.\n"); }
|array_real                   { printf("Successful Real Array Declaration.\n"); }

;


/* --------------------INTEGER DECLARATION------------------------ */

int_ids: int_ids CM VAR 			{
	
  int idx = check_var($3);

  /*printf("idx = %d\n", idx);*/
	
	if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[tos] , $3) ;
    in_use[tos]=1;

    /*printf("%dth variable %s is being declared!\n" ,tos, $3);*/

    tos++;
   }
}
| int_ids CM VAR ASGN expr		{

	int idx = check_var($3);

	if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    int x = (int)$5 ;
    strcpy( var[tos] , $3 );
    in_use[tos] = 1;
    sym_int[tos] = x ;
    /*printf("%dth variable %s = %d\n" ,tos, $3 , x);*/
    tos++;

   }

	}

| VAR								{

	int idx = check_var($1);
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $1);
  }
  else{

    strcpy( var[tos] , $1) ;
    in_use[tos]=1;
    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
}
| VAR ASGN expr					{

	int idx = check_var($1);
  /*printf("idx = %d\n", idx);*/

  if(idx!=-1)
  {
   printf("%s is already declared!\n", $1);
  }
  else{

    int x = (int)$3 ;
    strcpy( var[tos] , $1) ;
    in_use[tos] = 1;
    sym_int[tos] = x ;

    /*printf("%dth variable %s = %d\n" ,tos, $1 , x);*/
    tos++;

   }

	}
;

/* ------------------------------- INTEGER ARRAY ------------------------------ */

array_int : ARR INT VAR LI INT_NUM RI       {
  
  int idx = check_var($3);
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[tos] , $3) ;
    in_use[tos]=11;

    sym_int[tos]= ail;
    ail+=$5;

    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
}

;


/* --------------------------------REAL DECLARATION-------------------------------- */


real_ids: real_ids CM VAR       {
  
  int idx = check_var($3);

  /*printf("idx = %d\n", idx);*/
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[tos] , $3) ;
    in_use[tos]=2;

    /*printf("%dth variable %s is being declared!\n" ,tos, $3);*/

    tos++;
   }
}
| real_ids CM VAR ASGN expr    {

  int idx = check_var($3);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    double x = $5 ;
    strcpy( var[tos] , $3 );
    in_use[tos] = 2;
    sym_real[tos] = x ;
    /*printf("%dth variable %s = %lf\n" ,tos, $3 , x);*/ 
    tos++;

   }

  }

| VAR               {

  int idx = check_var($1);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $1);
  }
  else{

    strcpy( var[tos] , $1) ;
    in_use[tos]=2;
    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
}
| VAR ASGN expr         {

  int idx = check_var($1);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", $1);
  }
  else{

    double x = $3 ;
    strcpy( var[tos] , $1) ;
    in_use[tos] = 2;
    sym_real[tos] = x ;

    /*printf("%dth variable %s = %lf\n" ,tos, $1 , x);*/
    tos++;

   }

  }
;

/* ---------------------- ARRAY REAL --------------------------- */

array_real : ARR DOUBLE VAR LI INT_NUM RI       {
  
  int idx = check_var($3);
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[tos] , $3) ;
    in_use[tos]=22;

    sym_int[tos]= arl;
    arl+=$5;

    /*printf("%dth variable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
}

;

/* --------------------------TEXT DECLARATION----------------------------- */

text_ids: text_ids CM VAR       {
  
  int idx = check_var($3);
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[tos] , $3) ;
    in_use[tos]=3;

    /*printf("%dth VARiable %s is being declared!\n" ,tos, $3);*/

    tos++;
   }
}
| text_ids CM VAR ASGN STRING    {

  int idx = check_var($3);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[tos] , $3 );
    in_use[tos] = 3;

    sym_text[tos] = (char *) malloc ( sizeof(char)*(strlen($5) + 1) );

    strcpy(sym_text[tos] , $5);

    /*printf("%dth VARiable %s = %s\n" ,tos, $3 , sym_text[tos]);*/
    tos++;

   }

  }

| VAR               {

  int idx = check_var($1);
 

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $1);
  }
  else{

    strcpy( var[tos] , $1) ;
    in_use[tos]=3;
    /*printf("%dth VARiable %s is being declared!\n" ,tos, $1);*/
    tos++;
   }
}
| VAR ASGN STRING         {

  int idx = check_var($1);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", $1);
  }
  else{

    
    strcpy( var[tos] , $1) ;
    in_use[tos] = 3;

    sym_text[tos] = (char*) malloc ( sizeof(char)*(strlen($3) + 1) );

    strcpy(sym_text[tos] , $3);

    /* printf("%dth VARiable %s = %s\n" ,tos, $1 , sym_text[tos]); */
    tos++;

   }

  }

;


/* --------------------------ASSIGNMENT-----------------------------*/

assignment: assignment CM asgn_stmt
| asgn_stmt

asgn_stmt: VAR ASGN expr       {
  
  int idx = check_var($1);

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", $1);
  }
  else {
    if(in_use[idx]==1){

        int x = (int) $3 ;
        sym_int[idx] = x ;
        /*printf("%s = %d\n", $1, x);*/
    }
    else if(in_use[idx]==2){

        double x = $3 ;
        sym_real[idx] = x ;
        /*printf("%s = %lf\n", $1, x);*/
    }
  }
}
| VAR ASGN STRING            {
  
  int idx = check_var($1);

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", $1);
  }
  else {
    sym_text[idx] = (char*) malloc ( sizeof(char)*(strlen($3) + 1) );

    strcpy(sym_text[idx] , $3);
    /*printf("%s = %s\n", $1, $3);*/
    }
}
| assign_array


;

/* -------------------------- SPECIAL STMT----------------------------*/

special: cond_stmts
| for_loop
| while_loop
| switch_stmts
| PRINT LP STRING RP {
  
    int length = strlen($3);
    char* str = malloc( length + 1 );
    strcpy(str, $3);

    printf("%s\n",str);
    free(str);
}
| PRINT LP expr RP   {
  
    printf("%lf\n",$3);

}
| PRINT LP VAR RP   {
  
  int idx = check_var($3);
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Integer Variable, %s = %d\n", $3, sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Real Variable, %s = %lf\n",$3, sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Text Variable, %s = %s\n", $3,str);
    free(str);
}

}

;

/* --------------------------CONDITIONALS-----------------------------*/

cond_stmts: if_stmt
| if_else_stmt
| if_elif_stmt
;

/* ----------------------------------IF------------------------------------- */

if_stmt: IF expr CLN LB PRINT LP STRING RP SM RB {
  
  if( (int)$2 ){
    int length = strlen($7);
    char* str = malloc( length + 1 );
    strcpy(str, $7);

    printf("Inside If Block: %s\n",str);
    free(str);
  }
}
| IF expr CLN LB PRINT LP expr RP SM RB {
  
  if( (int)$2 ){

    printf("Inside If Block: %lf\n",$7);
  }
}
| IF expr CLN LB PRINT LP VAR RP SM RB {
  
  if( (int)$2 ){

  int idx = check_var($7);
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Inside If Block: %d\n", sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Inside If Block: %lf\n", sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Inside If Block: %s\n",str);
    free(str);
  }
}
}

;

/* ---------------------------- IF ELSE --------------------------- */

if_else_stmt :IF expr CLN LB PRINT LP STRING RP SM RB ELSE CLN LB PRINT LP STRING RP SM RB  {
    
    int x = (int)$2 ;
    if( x!=0 ){

    int length = strlen($7);
    char* str = malloc( length + 1 );
    strcpy(str, $7);

    printf("Inside If Block: %s\n",str);
    free(str);
  }else{
    int length = strlen($16);
    char* str = malloc( length + 1 );
    strcpy(str, $16);

    printf("Inside Else Block: %s\n",str);
    free(str);
  }
}
| IF expr CLN LB PRINT LP expr RP SM RB ELSE CLN LB PRINT LP expr RP SM RB{

  if( (int)$2 ){

    printf("Inside If Block: %lf\n",$7);
  }else {
    printf("Inside Else Block: %lf\n",$16);
  }
  
}
| IF expr CLN LB PRINT LP VAR RP SM RB ELSE CLN LB PRINT LP VAR RP SM RB  {
    
  if( (int)$2 ){

  int idx = check_var($16);
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Inside If Block: %d\n", sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Inside If Block: %lf\n", sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Inside If Block: %s\n",str);
    free(str);
  }
}else {
  int idx = check_var($16);
  
  if(in_use[idx] == 0) { printf("\nVaribale not Declared Before.\n");}

  else if(in_use[idx] == 1)  { 

    printf("Inside Else Block: %d\n", sym_int[idx]);
  }
  else if(in_use[idx] == 2)  { 

    printf("Inside Else Block: %lf\n", sym_real[idx]);
}
  else if(in_use[idx] == 3)  { 

    int length = strlen(sym_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, sym_text[idx]);

    printf("Inside Else Block: %s\n",str);
    free(str);
  }
}
}
;

/* -----------------------------ELIF--------------------------------*/

if_elif_stmt: IF expr CLN LB PRINT LP expr RP SM RB elif_stmts{
  el = 0;
  for(i=0 ; i<11 ; i++)
  {
    elif[i] = 0;
  }

  if ((int)$2){

    elif[el]++;

    printf("Inside If Block: %lf\n",$7);
  }
  el++;
}

;

elif_stmts: elif_stmt
| elifel_stmt
| elif_stmt elif_stmts

;

elif_stmt: ELIF expr CLN LB PRINT LP expr RP SM RB    {

  for(i=0 ; i<el ; i++)
  {
    if(elif[i]==1){d = 1; break;}
  }
  
  if( ((int)$2==1) && (d==0) ){
    
    elif[el]++;

    printf("Inside Or-If Block No.%d : %lf\n",el+1 ,$7);
  }
  el++;
}

;

elifel_stmt : ELIF expr CLN LB PRINT LP expr RP SM RB ELSE CLN LB PRINT LP expr RP SM RB    {
  
  for(i=0 ; i<el ; i++)
  {
    if(elif[i]==1){d = 1; break;}
  }
  
  if( ((int)$2==1) && (d==0) ){
    
    elif[el]++;

    printf("Inside Or-If Block No.%d : %lf\n",el+1 ,$7);
  }
  else if( ((int)$2==0) && (d==0) ){

    printf("Inside Else Block : %lf\n", $16);
  }
  el++;
}

;
/* -----------------------------FOR LOOP ----------------------------- */

for_loop: FROM INT_NUM TO INT_NUM SKIP INT_NUM CLN LB PRINT LP expr RP SM RB    {
  
    int sk = $6 + 1 ;
    int it = 1;
    if($4 < $2) printf("Range Given Improperly.\n");
    else{
    for(i= $2 ; i<= $4 ; i=i+sk){
      printf("iteration %d (%d) : %lf\n", it,i, $11) ;
      it++;
    }}
}
| FROM INT_NUM TO INT_NUM SKIP INT_NUM CLN LB PRINT LP STRING RP SM RB    {
  
    int sk = $6 + 1 ;
    int it=1;
    if($4 < $2) printf("Range Given Improperly.\n");
    else{
    for(i= $2 ; i<= $4 ; i=i+sk){
      printf("iteration %d (%d) : %s\n", it,i, $11) ;
      it++;
    }}
}
| FROM INT_NUM TO INT_NUM CLN LB PRINT LP expr RP SM RB    {
  
    int it = 1;
    if($4 < $2) printf("Range Given Improperly.\n");
    else{
    for(i= $2 ; i<= $4 ; i++){
      printf("iteration %d (%d) : %lf\n", it,i, $9) ;
      it++;
    }}
}
| FROM INT_NUM TO INT_NUM CLN LB PRINT LP STRING RP SM RB    {
  
    int it = 1;
    if($4 < $2) printf("Range Given Improperly.\n");
    else{
    for(i= $2 ; i<= $4 ; i++){
      printf("iteration %d (%d) : %s\n", it,i, $9) ;
      it++;
    }}
}
| FROM INT_NUM TO INT_NUM CLN LB VAR LI RI ASGN expr SM RB    {
  
    int it = 1;
    if($4 < $2) printf("Range Given Improperly.\n");
    else{

  int idx = check_var($7);

  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $7);
  }
  else{

  for(i= $2 ; i<= $4 ; i++){

  if(in_use[idx]==11){
      int x = sym_int[idx];
      x=x+i;
        
      int y = (int)$11 ;
      arr_int[x] = y;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x=x+i;

      double y = $11 ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }

  printf("iteration %d : %s[%d] = %lf\n", it, $7, i, $11) ;
  it++;
  }
  
  }

    
    }
}
| FROM INT_NUM TO INT_NUM CLN LB PRINT LP VAR LI RI RP SM RB    {
  
    if($4 < $2) printf("Range Given Improperly.\n");
    else{
    
  int idx = check_var($9);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $9);
  }
  else{
  for(i= $2 ; i<= $4 ; i++){

  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=i;
        
      printf("%s[%d] = %d\n",$9, i, arr_int[x]) ;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=i;

      printf("%s[%d] = %lf\n",$9, i, arr_real[x]) ;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
  }}
}
| FROM INT_NUM TO INT_NUM SKIP INT_NUM CLN LB PRINT LP VAR LI RI RP SM RB    {
  
    if($4 < $2) printf("Range Given Improperly.\n");
    else{

  int sk = $6 + 1 ; 
  int idx = check_var($11);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $11);
  }
  else{
  for(i= $2 ; i<= $4 ; i=i+sk){

  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=i;
        
      printf("%s[%d] = %d\n",$11, i, arr_int[x]) ;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=i;

      printf("%s[%d] = %lf\n",$11, i, arr_real[x]) ;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
  }}
}

;

/* -------------------------- WHILE LOOP --------------------------- */


while_loop : WHILE VAR DO CLN LB PRINT LP STRING RP SM VAR DEC SM RB    {
  
    int idx = check_var($2) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%s\n",it,$8);
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
}
| WHILE VAR DO CLN LB PRINT LP STRING RP SM DEC VAR SM RB    {
  
    int idx = check_var($2) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%s\n",it,$8);
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
}
| WHILE VAR DO CLN LB PRINT LP expr RP SM VAR DEC SM RB    {
  
    int idx = check_var($2) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%lf\n",it,$8);
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
}
| WHILE VAR DO CLN LB PRINT LP expr RP SM DEC VAR SM RB    {
  
    int idx = check_var($2) , x;

    if(idx==-1)printf("Variable not Declared Yet.\n");
    else{
      if(in_use[idx]==1){
          x = sym_int[idx];
          int it=1;

          for(i=x;i>0;i--)
          {
            printf("Inside While Loop iteration %d :%lf\n",it,$8);
            it++;
          }
      }
      else {
            printf("Improper Data Type for Iterator.\n");
      }
    }
}

;

/* --------------------------------- ARRAY ASSIGNMENT ------------------------------ */

assign_array : VAR LI INT_NUM RI ASGN expr     {
  
  int idx = check_var($1);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=$3;
      int y = (int)$6 ;
      arr_int[x] = y;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=$3;
      double y = $6 ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
} 
| VAR LI VAR RI ASGN expr     {
  
  int idx = check_var($1);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];

      int idx1 = check_var($3);
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }

      int y = (int)$6 ;
      arr_int[x] = y;
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      
      int idx1 = check_var($3);
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }

      double y = $6 ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
} 

;

/* --------------------------SWITCH CASE---------------------------- */

switch_stmts: SWITCH sw_expr CLN LB case_stmts RB          {
  
}

;
case_stmts: case_stmt
| case_stmt def_stmt
| case_stmt case_stmts

;
case_stmt: CASE INT_NUM CLN LB PRINT LP expr RP SM RB   {
  
  cs++;
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ($2 == op) && (n==0) ){

    printf("Inside Case No.%d : %lf\n",cs ,$7);
  }
}
| CASE INT_NUM CLN LB PRINT LP STRING RP SM RB   {
  
  cs++;
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ($2 == op) && (n==0) ){

    printf("Inside Case No.%d : %s\n",cs ,$7);
  }
}
| CASE INT_NUM CLN LB PRINT LP expr RP SM BRK SM RB   {
  
  cs++;
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ($2 == op) && (n==0) ){

    swt[cs]++;
    printf("Inside Case No.%d : %lf\n",cs ,$7);
  }
}
| CASE INT_NUM CLN LB PRINT LP STRING RP SM BRK SM RB  {

  cs++;  
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if( ($2 == op) && (n==0) ){

    swt[cs]++;
    printf("Inside Case No.%d : %s\n",cs ,$7);
  }
}

;

def_stmt: DEFAULT CLN LB PRINT LP STRING RP SM RB {
  
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if(n==0){

    printf("Inside Default Case : %s\n",$6);
  }
}
| DEFAULT CLN LB PRINT LP expr RP SM RB {
  
  for(i=0 ; i<cs ; i++)
  {
    if(swt[i]==1){n = 1; break;}
  }
  
  if(n==0){

    printf("Inside Default Case : %lf\n",$6);
  }
}

;

sw_expr: expr         { 
    op = (int)$1 ; 
    cs = 0 ,n=0;
    for(i=0;i<11;i++)swt[i]=0;
    $$ = $1 ; 
}

;

/* ---------------------------EXPRESSION----------------------------- */


expr: INT_NUM             { $$ = $1*1.0; }
| REA_NUM                 { $$ = $1*1.0; }
| VAR                     { 

  int idx = check_var($1);
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(in_use[idx] == 1)  { $$ = sym_int[idx]*1.00; }
  else if(in_use[idx] == 2)  { $$ = sym_real[idx]*1.00 ; }

  /*printf("%s = %lf\n",$1, $$);*/

 }
| VAR LI INT_NUM RI   {

  int idx = check_var($1);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];
      x+=$3;
      $$ = arr_int[x]*1.0 ;

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      x+=$3;
      $$ = arr_real[x];

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
}
| VAR LI VAR RI   {

  int idx = check_var($1);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(in_use[idx]==11){
      int x = sym_int[idx];
      int idx1 = check_var($3);
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }
      $$ = arr_int[x]*1.0 ;

      /*printf("%s[%s] = %lf\n",$1, $3, $$);*/
    }
  else if(in_use[idx]==22){
      int x = sym_int[idx];
      int idx1 = check_var($3);
      if(idx1=-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(in_use[idx1]==1){
          x+=sym_int[idx1];
        }
      }
      $$ = arr_real[x]*1.0 ;
      /*printf("%s[%s] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Improper Data Type.Not Array\n");
    }
  }
}
| ABS expr            { $$ = fabs($2)*1.0 ; }
| FACT expr           {
  
  int x = (int)$2 ;

  if(!x){ $$ = 1.0 ; }
  else if(x<0){ printf("Factrorial of Negative is not Defined.\t"); $$ = 0.0 ; }
  else if(x>20){ printf("Factrorial is too Large for Data Type.\t"); $$ = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  $$ = factor*1.0;
  }
 }
| expr ADD expr         { $$ = $1 + $3; }
| expr SUB expr         { $$ = $1 - $3; }
| expr MUL expr         { $$ = $1 * $3; }
| expr DIV expr         {
  if($3)
    {
     $$ = ($1 / $3)*1.0 ;
    }
  else
    {
     $$ = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 }
| expr MOD expr         { $$ = ((int)$1 % (int)$3)*1.0 ; }
| expr POWER expr         { $$ = pow( (int)$1 , (int)$3 )*1.0 ; }

/* --------------------- PREFIX INCREMENT DECREMENT------------------------ */

| INC VAR             {
  
  int idx = check_var($2);
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    sym_int[idx] = sym_int[idx] + 1 ;
    $$ = sym_int[idx]*1.0;
     }
  else if(in_use[idx] == 2) { 

    sym_real[idx] = sym_real[idx] + 1 ;
    $$ = sym_real[idx];
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| DEC VAR             {

  int idx = check_var($2);
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    sym_int[idx] = sym_int[idx] - 1 ;
    $$ = sym_int[idx]*1.0;
     }
  else if(in_use[idx] == 2) { 

    sym_real[idx] = sym_real[idx] - 1 ;
    $$ = sym_real[idx];
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}

/* --------------------- POSTFIX INCREMENT DECREMENT------------------------ */

| VAR INC             {

  int idx = check_var($1);
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    $$ = sym_int[idx]*1.0;
    sym_int[idx] = sym_int[idx] + 1 ;
     }
  else if(in_use[idx] == 2) { 

    $$ = sym_real[idx];
    sym_real[idx] = sym_real[idx] + 1 ;
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| VAR DEC             {

  int idx = check_var($1);
  
  if(in_use[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(in_use[idx] == 1) {

    $$ = sym_int[idx]*1.0;
    sym_int[idx] = sym_int[idx] - 1 ;
     }
  else if(in_use[idx] == 2) { 

    $$ = sym_real[idx];
    sym_real[idx] = sym_real[idx] - 1 ;
   }
  else if(in_use[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| NOT expr               {
  
  //if(!$2)$$ = 1;
  //else $$ = 0;
  $$ = (!($2))*1.0 ;
}
| expr LES expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x < y)*1.0 ; 
}
| expr GRT expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x > y)*1.0 ; 
}
| expr LES_EQU expr       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x <= y)*1.0 ; 
}
| expr GRT_EQU expr       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x >= y)*1.0 ; 
}
| expr EQU expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x == y)*1.0 ; 
}
| expr NOT_EQU expr       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x != y)*1.0 ; 
}
| expr OR expr          { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x || y)*1.0 ; 
}
| expr AND expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x && y)*1.0 ; 
}
| LP expr RP             { $$ = $2; }
;


%%

int yywrap()
{
	return 1;
}
int yyerror(char *s)
{
	fprintf(stderr,"%s\n",s);
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
    
	return 0;
}