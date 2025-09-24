#include <stdio.h>

int multiplication(int a, int b) {
    if(a <= 0 || b <= 0) {
        printf("Erreur: les nombres doivent être positifs\n");
        return -1;
    }
    
    int resultat = 0;
    for(int i = 0; i < b; i++) {
        resultat += a;
    }
    return resultat;
}

int main() {
    int a, b;
    
    printf("Entrez le premier nombre (a > 0): ");
    scanf("%d", &a);
    
    printf("Entrez le deuxième nombre (b > 0): ");
    scanf("%d", &b);
    
    int resultat = multiplication(a, b);
    
    if(resultat != -1) {
        printf("%d x %d = %d\n", a, b, resultat);
    }
    
    return 0;
}