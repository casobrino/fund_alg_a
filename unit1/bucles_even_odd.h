#include <stdio.h>
int main(){
    int cont = 100;
    printf("Hasta que numero deseas contar:\n");
    scanf("%d",&cont);

    printf("Numeros pares: \n");
    for (int i = 0; i <= cont; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    
    printf("Números impares: \n");
    int ind=0;
    while(ind != cont){
        if(ind % 2 != 0){
            printf("%d\n", ind);
        }
        ind++;
    }
    
    return 0;
}
