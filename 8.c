
#include <stdio.h>

int produitScalaire(int A[], int B[], int n) {
    int produit = 0;
    for(int i = 0; i < n; i++) {
        produit += A[i] * B[i];
    }
    return produit;
}

int main() {
    int A[100], B[100], n;

    printf("Entrez la taille des vecteurs : ");
    scanf("%d", &n);

    printf("Entrez les éléments du premier vecteur :\n");
    for(int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Entrez les éléments du second vecteur :\n");
    for(int i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    int resultat = produitScalaire(A, B, n);
    printf("Produit scalaire = %d\n", resultat);

    return 0;
}
