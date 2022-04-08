#include <stdio.h>

int main()
{
    int array[3];
    int n;
    for (int i = 0; i < 3; i++)
    {
        int numero = 0;
        printf("introduce el numero 1: ");
        scanf("%d", &numero);
        array[i] = numero;
    }
    for (int i = 0; i < 3; i++)
    {
        if (n < array[i])
        {
            n = array[i];
        }
    }
}