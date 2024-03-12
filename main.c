#include <stdio.h>
#include <stdlib.h>

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

int main()
{
    function_6();
    return 0;
}
