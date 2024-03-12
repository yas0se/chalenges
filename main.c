#include <stdio.h>


void function_6(){
    int tab[7];
    int x,y;
    srand(time(NULL));
    for(int i=0; i<6;i++){
        tab[i]=rand() %9;
        printf("tab[%d]=%d \n", i,tab[i]);
    }

    for( int i=0; i<=6; i++){
        for( int j=i; j<=6; j++){
            if(tab[j]<tab[i]){
                x=tab[j];
                y=j;
            }
        }
        tab[y]=tab[i];
        tab[i]=x;
    }
    printf("______________________________________________\n");
    for(int i=0; i<6;i++){
        printf("tab[%d]=%d \n", i,tab[i]);
    }

}
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
int main()
{
    function_6();

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
