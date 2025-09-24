
#include <stdio.h>

void sommeMatrices(int A[10][10], int B[10][10], int C[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int n, m;

    printf("Entrez le nombre de lignes (max 10) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes (max 10) : ");
    scanf("%d", &m);

    printf("Entrez les éléments de la première matrice :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez les éléments de la deuxième matrice :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    sommeMatrices(A, B, C, n, m);

    printf("Résultat de la somme des matrices :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
