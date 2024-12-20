@echo off
REM Compilation de l'analyseur lexical et syntaxique avec Flex et Bison
REM Assurez-vous d'exécuter ce script dans l'environnement MSYS2 ou d'ajouter les chemins de Flex, Bison et GCC

setlocal

REM Chemin vers le compilateur GCC, Flex et Bison dans MSYS2
set GCC=gcc
set FLEX=C:\msys64\usr\bin\flex.exe
set BISON=C:\msys64\usr\bin\bison.exe

REM Fichiers source
set LEX_FILE=lexical.l
set YACC_FILE=syntaxic.y
set LEX_C=lex.yy.c
set YACC_C=syntaxic.tab.c
set YACC_H=syntaxic.tab.h
set SYMBOL_TABLE=TableSymbole.c

REM Nom de l'exécutable final
set EXECUTABLE=analyseur.exe

echo ---- Compilation avec Bison ----
::%BISON% -d -Wno-conflicts-sr %YACC_FILE%
%BISON% -d %YACC_FILE%
if errorlevel 1 (
    echo Erreur lors de la génération de %YACC_C% avec Bison.
    exit /b 1
)

:: echo ---- Details conflis ----
:: %BISON% -Wcounterexamples %YACC_FILE%


echo ---- Compilation avec Flex ----
%FLEX% %LEX_FILE%
if errorlevel 1 (
    echo Erreur lors de la génération de %LEX_C% avec Flex.
    exit /b 1
)

echo ---- Compilation des fichiers C ----
%GCC% -c %YACC_C%
if errorlevel 1 (
    echo Erreur lors de la compilation de %YACC_C%.
    exit /b 1
)

%GCC% -c %LEX_C%
if errorlevel 1 (
    echo Erreur lors de la compilation de %LEX_C%.
    exit /b 1
)

%GCC% -c %SYMBOL_TABLE%
if errorlevel 1 (
    echo Erreur lors de la compilation de %SYMBOL_TABLE%.
    exit /b 1
)

echo ---- Création de l'exécutable ----
%GCC% -o %EXECUTABLE% syntaxic.tab.o lex.yy.o TableSymbole.o quadruplet.o
if errorlevel 1 (
    echo Erreur lors de la création de l'exécutable.
    exit /b 1
)

echo ---- Compilation terminée avec succès. Exécutable généré : %EXECUTABLE% ----
endlocal
