#include <stdio.h>

int a,b;

int main(){
    printf("Ingresa numero1");
    scanf("%d", &a);
    printf("Ingresa numero2");
    scanf("%d", &b);
    int sum= a + b;

    printf("La suma es: %d\n", sum);
    return 0;
}