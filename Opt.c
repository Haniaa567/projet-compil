#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TableSymbole.h"
#include "TableSymbole.c"
#include "quadruplet.h"
#include "Opt.h"

void optimisation()
{
    checkX2(QuadR);
    checkPow(QuadR);
    checkVarUse(tab, tabs, tabm, QuadR);
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

// Modification majeure de cette fonction pour utiliser les tableaux au lieu des listes chaînées
void checkVarUse(element *tab, elt *tabs, elt *tabm, quad *q)
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
}

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
