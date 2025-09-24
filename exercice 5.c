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
    
    // Verification si le tableau est trie
    int estTrie = 1; // On suppose qu'il est trie
    
    for(int i = 0; i < n-1; i++) {
        if(tab[i] > tab[i+1]) {
            estTrie = 0;
            break;
        }
    }
    
    if(estTrie) {
        printf("Le tableau est trie en ordre croissant\n");
    } else {
        printf("Le tableau n'est pas trie\n");
    }
    
    return 0;
}