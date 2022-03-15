#include <stdio.h>

void imprimeArreglo(int array[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", array[i]);
    }
}
int main()
{
    printf("Arreglo definido como {4, 5, 6, 7}\n");
    int arreglo[4] = {4, 5, 6, 7};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    imprimeArreglo(arreglo, tam);
    scanf("%d"); // para poner un pause en mi codigo
    return 0;
}