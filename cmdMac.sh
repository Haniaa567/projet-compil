flex lexical.l
gcc -o lexical_analyzer lex.yy.c -lc -ll
./lexical_analyzer