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
    // Calcul de la mediane
    float mediane;
    if(n % 2 == 0) {
        mediane = (tab[n/2 - 1] + tab[n/2]) / 2.0;
    } else {
        mediane = tab[n/2];
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    printf("Mediane: %.2f\n", mediane);
    
    return 0;
}