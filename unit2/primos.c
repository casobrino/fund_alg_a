#include <stdio.h>

int primo(int numero)
{
    if (numero == 1 || numero == 0)
        return 0;
    if (numero == 4)
        return 0;
    for (int i = 2; i < numero / 2; i++)
    {
        if (numero % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int numero;
    printf("Proporciona un numero: ");
    scanf("%d", &numero);
    if (primo(numero))
        printf("es un numero primo ");
    else
        printf("no es un numero primo");
    
    scanf("%d");
    return 0;
}