#include <stdio.h>

int calcualrArea(int base, int altura){
    return (base * altura);
    }

int main()
{
    int base, altura;
    printf("introduce la base\n");
    scanf("%d",&base);
    
    printf("introduce la base\n");
    scanf ("%d", &altura);
    
    
    printf("El area es: ");
    printf("%d", calcualrArea(base, altura));

    if (base == altura)
    {
        printf(" La figura es un cuadrado ");
    }
    scanf("%d"); //para un pause interno
}