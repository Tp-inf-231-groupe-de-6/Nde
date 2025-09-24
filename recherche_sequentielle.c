#include <stdio.h>

// Recherche séquentielle - retourne l'indice si trouvé, -1 sinon
int rechercheSequentielle(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return 1; // Élément trouvé
        }
    }
    return -1; // Élément non trouvé
}

int main() {
    int tableau[100]; 
    int taille; 
    int valeur;
    int resultat;
  
    // Saisie de la taille du tableau
    printf("Entrez le nombre d'éléments du tableau (max 100) : ");
    scanf("%d", &taille);
    
    // Saisie des éléments du tableau
    printf("\nSaisie des éléments du tableau :\n");
    for(int i = 0; i < taille; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    
    // Affichage du tableau
    printf("\nTableau saisi : [");
    for(int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) printf(", ");
    }
    printf("]\n");
    
    // Saisie de la valeur à rechercher
    printf("\nEntrez la valeur à rechercher : ");
    scanf("%d", &valeur);
    
    // Recherche séquentielle
    resultat = rechercheSequentielle(tableau, taille, valeur);
    
    // Affichage du résultat
    if (resultat != -1) {
        printf("\n La valeur %d a été trouvée à l'indice %d\n", valeur, resultat);
        printf("C'est la position %d dans le tableau\n", resultat + 1);
    } else {
        printf("\n La valeur %d n'a pas été trouvée dans le tableau\n", valeur);
    }
    
    return 0;
}