#include <stdio.h>

int main(){
    
    /***    Declaracion de Variables   ****/
    int cont = 0;
    int suma1 = 0;
    int suma2 = 0;
    int arreglo[20];
    int arregloBidimensional[2][10];
    
    /* Lenar el la lista */
    for (int i =0; i < 20; i++){
        arreglo[i] = i;
    }
    
    /*
    ******** Comprobacion del arreglo lleno*******
    for (int i = 0; i < 20; ++i) {
        printf("%d, ", arreglo[i]);
    }
    */
    
    ///Llenado de la funcion bidimensional con el primer arreglo
    for (int i = 0; i< 2; i++){
        for (int j = 0; j< 10; j++){
            arregloBidimensional[i][j] = arreglo[cont];
            cont++;
        }
    }
    
    ///Iniciando sumas a los niveles de los arrelgos
    cont = 0;
    for (int i = 0; i< 2; i++){
        for (int j = 0; j < 10; j++){
            if(cont == 0) suma1 = suma1 + arregloBidimensional[i][j];
            if(cont == 1) suma2 = suma2 + arregloBidimensional[i][j];
        }
        cont ++;
    }
    
    printf("La suma de los primeros numeros es: %d\n", suma1);
    
    printf("La suma de los segundos numero es : %d\n", suma2);
    
    ///**** Metodos *****
    
    
    
    return 0;
}
