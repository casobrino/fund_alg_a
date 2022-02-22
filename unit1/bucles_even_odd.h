#include <stdio.h>

int main()
{
    int cont = 0;
    printf("Hasta que numero deseas contar: ");
    scanf("%d", &cont);

    for (int i = 0; i <= cont; i++){
        printf("Numeros pares: \n");
        if (i % 2 == 0){
            printf("%d", i);
        }
    }

    for (int i = 0; i <= cont; i++){
        printf("Numeros impares: \n");
        if (i % 2 != 0){
            printf("%d", i);
        }
    }
}
