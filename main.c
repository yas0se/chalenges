#include <stdio.h>

void cryptageParDecalage(char *chaine, int decalage) {
    for (int i = 0; chaine[i] != '\0'; ++i) {
        
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            chaine[i] = (chaine[i] - 'A' + decalage) % 26 + 'A';
        }
        
        else if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = (chaine[i] - 'a' + decalage) % 26 + 'a';
        }
        
    }
}

int main() {
    char chaine[100];
    int decalage;

    
    printf("Entrez la chaîne à crypter : ");
    fgets(chaine, sizeof(chaine), stdin);

    
    printf("Entrez le décalage pour le cryptage : ");
    scanf("%d", &decalage);

    
    cryptageParDecalage(chaine, decalage);

    
    printf("Chaîne cryptée : %s", chaine);

    return 0;
}
