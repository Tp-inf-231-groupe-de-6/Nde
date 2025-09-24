#include <stdio.h>

int main() {
    int m, n;
    printf("Entrez le nombre de lignes (m) : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes (n) : ");
    scanf("%d", &n);

    int mat[m][n], vec[n], res[m];

    // Lecture de la matrice
    printf("Entrez les éléments de la matrice (%d x %d):\n", m, n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
             printf("la matrice[%d][%d] " ,i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Lecture du vecteur colonne
    printf("Entrez les éléments du vecteur (%d) :\n", n);
    for(int j = 0; j < n; j++) {
        scanf("%d", &vec[j]);
    }

    // Multiplication matrice × vecteur
    for(int i = 0; i < m; i++) {
        res[i] = 0;
        for(int j = 0; j < n; j++) {
            res[i] += mat[i][j] * vec[j];
        }
    }

    // Affichage du résultat
    printf("\nRésultat (Matrice × Vecteur colonne) :\n");
    for(int i = 0; i < m; i++) {
        printf("%d\n", res[i]);
    }

    return 0;
}