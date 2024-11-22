#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TableSymbole.h"
#include "quadruplet.c"
#include "Opt.h"

void optimisation()
{
    checkX2(QuadR);
    checkPow(QuadR);
    checkVarUse(tab, QuadR);
    chekPropCopie(QuadR);
    int i = 0;
    for(i = 0; i < qc-1; i++)
    {
        if(strcmp(QuadR[i].opt, "") == 0)
        {
            int j = 0;
            for(j = i; j < qc-1; j++)
            {
                QuadR[j].opt = strdup(QuadR[j+1].opt);
                QuadR[j].opd1 = strdup(QuadR[j+1].opd1);
                QuadR[j].opd2 = strdup(QuadR[j+1].opd2);
                QuadR[j].res = strdup(QuadR[j+1].res);
            }
            qc--;
        }
    }
}

void checkX2(quad *q)
{
    int i = 0;
    for (i = 0; i < qc; i++)
    {
        if(q[i].opt[0] == '*')
        {
            if(q[i].opd1[0] == '2')
            {
                q[i].opt = strdup("+");
                q[i].opd1 = strdup(q[i].opd2);
                q[i].opd2 = strdup(q[i].opd2);
            }
            else if (q[i].opd2[0] == '2')
            {
                q[i].opt = strdup("+");
                q[i].opd1 = strdup(q[i].opd1);
                q[i].opd2 = strdup(q[i].opd1);
            }
        }
    }
}

void checkPow(quad *q)
{
    int i = 0;
    for (i = 0; i < qc; i++)
    {
        if(q[i].opt[0] == '^')
        {
            if(q[i].opd1[0] == '2')
            {
                q[i].opt = strdup("*");
                q[i].opd1 = strdup(q[i].opd2);
                q[i].opd2 = strdup(q[i].opd2);
            }
            else if (q[i].opd2[0] == '2')
            {
                q[i].opt = strdup("*");
                q[i].opd1 = strdup(q[i].opd1);
                q[i].opd2 = strdup(q[i].opd1);
            }
        }
    }
}

// Version simplifiée ne prenant en compte que le tableau tab
/*
void checkVarUse(element *tab, quad *q)
{
    int i;
    for(i = 0; i < 1000; i++) // Parcours du tableau des identifiants
    {
        if(tab[i].state == 1) // Si la case est occupée
        {
            int bol = 0;
            int k;
            for(k = 0; k < qc; k++)
            {
                if(strcmp(q[k].opd1, tab[i].name) == 0 || 
                   strcmp(q[k].opd2, tab[i].name) == 0 || 
                   strcmp(q[k].res, tab[i].name) == 0)
                {
                    bol = 1;
                    break;
                }
            }
            if(bol == 0)
            {
                printf("!!! Warning : IDF ( %s ) declare et non utiliser\n", tab[i].name);
            }
        }
    }
}*/

void chekPropCopie(quad *q)
{
    int i = 0;
    for (i = 0; i < qc; i++)
    {
        if(q[i].opt[0] == '=')
        {
            int k;
            for(k = i+1; k < qc; k++)
            {
                if(strcmp(q[i].opd1, q[k].res) == 0 || strcmp(q[i].res, q[k].res) == 0)
                    break;
                if(q[k].opt[0] == '+' || q[k].opt[0] == '*' || 
                   q[k].opt[0] == '-' || q[k].opt[0] == '/' || 
                   q[k].opt[0] == '^')
                {
                    if(strcmp(q[i].res, q[k].opd1) == 0)
                    {
                        q[k].opd1 = strdup(q[i].opd1);
                        q[i].opt = strdup("");
                        q[i].opd1 = strdup("");
                        q[i].opd2 = strdup("");
                        q[i].res = strdup("");
                    }
                    else if(strcmp(q[i].res, q[k].opd2) == 0)
                    {
                        q[k].opd2 = strdup(q[i].opd1);
                        q[i].opt = strdup("");
                        q[i].opd1 = strdup("");
                        q[i].opd2 = strdup("");
                        q[i].res = strdup("");
                    }
                }
            }
        }
    }
}

/*
// Définition des variables globales
element tab[1000];
elt tabs[40], tabm[40];

void initialiserTS() {
    int i;
    // Initialisation de tab
    for(i = 0; i < 1000; i++) {
        tab[i].state = 0;
    }
    
    // Ajout de quelques identifiants pour le test
    strcpy(tab[0].name, "x");
    strcpy(tab[0].type, "INT");
    tab[0].state = 1;
    
    strcpy(tab[1].name, "y");
    strcpy(tab[1].type, "INT");
    tab[1].state = 1;
    
    strcpy(tab[2].name, "z");
    strcpy(tab[2].type, "INT");
    tab[2].state = 1;
    
    strcpy(tab[3].name, "unused");
    strcpy(tab[3].type, "INT");
    tab[3].state = 1;
}

int main() {
    printf("Test du programme d'optimisation\n\n");
    
    // Initialisation de la table des symboles
    initialiserTS();
    
    // Test 1: Multiplication par 2
    createQuad("*", "2", "x", "t1");
    createQuad("+", "t1", "y", "z");
    
    // Test 2: Puissance de 2
    createQuad("^", "x", "2", "t2");
    
    // Test 3: Test des copies
    createQuad("=", "x", "", "t3");
    createQuad("+", "t3", "y", "z");
    
    // Test 4: Variable non utilisée (unused)
    // La variable "unused" est déclarée mais jamais utilisée dans les quadruplets
    
    printf("Quadruplets avant optimisation:\n");
    displayQuad();
    
    printf("\nApplication des optimisations...\n");
    optimisation();
    
    printf("\nQuadruplets après optimisation:\n");
    displayQuad();
    
    printf("\nRésultats attendus:\n");
    printf("1. La multiplication par 2 (t1 = 2 * x) devrait être transformée en addition (t1 = x + x)\n");
    printf("2. La puissance de 2 (t2 = x ^ 2) devrait être transformée en multiplication (t2 = x * x)\n");
    printf("3. La copie inutile via t3 devrait être éliminée\n");
    printf("4. Un warning devrait être affiché pour la variable 'unused'\n");
    
    return 0;
}*/