CC=gcc-14
CFLAGS=-Wall

monProgramme: syntaxic.tab.o lex.yy.o TableSymbole.o quadruplet.o
	$(CC) $(CFLAGS) -o monProgramme lex.yy.o syntaxic.tab.o TableSymbole.o quadruplet.o -ly -ll

lex.yy.c: lexical.l
	flex -o lex.yy.c lexical.l

syntaxic.tab.c: syntaxic.y
	bison -d -o syntaxic.tab.c syntaxic.y

TableSymbole.o: TableSymbole.c TableSymbole.h
	$(CC) $(CFLAGS) -c TableSymbole.c
quadruplet.o: quadruplet.c quadruplet.h
	$(CC) $(CFLAGS) -c quadruplet.c
clean:
	rm -f lex.yy.c syntaxic.tab.c syntaxic.tab.h *.o monProgramme