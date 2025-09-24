#include <stdio.h>

void produitMatrices(int A[10][10], int B[10][10], int C[10][10], int n, int m, int p) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int n, m, p;

    printf("Entrez le nombre de lignes de la matrice A : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice A (et lignes de B) : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de la matrice B : ");
    scanf("%d", &p);

    printf("Entrez les éléments de la matrice A (%d x %d) :\\n", n, m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez les éléments de la matrice B (%d x %d) :\\n", m, p);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    produitMatrices(A, B, C, n, m, p);

    printf("Résultat du produit des matrices A × B :\\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\\n");
    }

    return 0;
}