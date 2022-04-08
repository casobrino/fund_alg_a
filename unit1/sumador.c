#include <stdio.h>
int main(){
int a,b;
    printf("Ingresa numero1");
    scanf("Ingresa numero1,%d", &a);
    printf("Ingresa numero2");
    scanf("%d", &b);
    int sum= a + b;

    printf("La suma es: %d\n", sum);
    return 0;
}