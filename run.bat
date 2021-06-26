bison -d sem2.y
flex syn.l
gcc lex.yy.c sem2.tab.c -o ex
pause