#include <stdio.h>

int main() {
    int n;
    
    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);
    
    int tab[n];
    
    printf("Saisie des elements du tableau:\n");
    for(int i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }
    
    printf("Tableau initiale: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    // Inversion du tableau
    for(int i = 0; i < n/2; i++) {
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
    
    printf("Tableau inverse: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0;
}