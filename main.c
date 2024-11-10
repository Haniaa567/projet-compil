#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TableSymbole.h"

int main() {
    // Initialisation des tables
    initialisation();

    // Insertion de quelques identifiants/constantes
    rechercher("variable1", "IDF", "int", "10", 0);
    rechercher("constant1", "CONST", "float", "3.14", 0);

    // Insertion de mots-clés
    rechercher("if", "KEYWORD", "condition", "", 1);
    rechercher("else", "KEYWORD", "condition", "", 1);

    // Insertion de séparateurs
    rechercher(";", "SEPARATOR", "", "", 2);
    rechercher(",", "SEPARATOR", "", "", 2);

    // Recherche de quelques entités
    /*
    rechercherIDFCONST("variable1", "IDF", "int", "10");
    rechercherKeywords("if", "KEYWORD", "condition", "");
    rechercherseparateur(";", "SEPARATOR", "", "");*/

    // Affichage des tables pour vérifier les insertions
    afficher(0); // Table des identifiants/constantes
    afficher(1); // Table des mots-clés
    afficher(2); // Table des séparateurs

    // Test de la fonction pour obtenir la position d'un identifiant
    int pos = positionIDF("variable1");
    if (pos != -1) {
        printf("\nPosition de 'variable1' dans tab: %d\n", pos);
    }

    // Test de la fonction de vérification de type
    if (verifcmpType("variable1", "int") == 1) {
        printf("'variable1' est du type 'int'.\n");
    } else {
        printf("'variable1' n'est pas du type 'int'.\n");
    }

    // Récupérer et afficher le type et la valeur d'un identifiant
    printf("Type de 'variable1': %s\n", getType("variable1"));
    printf("Valeur de 'variable1': %s\n", getVal("variable1"));

    return 0;
}
