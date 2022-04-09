#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {5, 2, 8, 7, 1};
    int temp = 0;
    int tamanio = sizeof(arr) / sizeof(arr[0]);

    //Aplicamos el metodo sort
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("arreglo ordenado: \n");

    //Metodo DisplayArray
    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < tamanio; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}