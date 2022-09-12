#include <stdio.h>

#define RENGLONES 3
#define COLUMNAS 5

 int main() {

    int bidimensional[RENGLONES][COLUMNAS];
    int valor = 1;

    bidimensional[0][0] = 0;
    bidimensional[2][4] = 10;

    for(int columna = COLUMNAS - 1; columna >= 0; columna--) {
        for(int renglon = RENGLONES - 1; renglon >= 0; renglon--) {

            bidimensional[renglon][columna] = valor;
            if(valor == 1)
                valor = 0;
            else
                valor = 1;
        }
    }

     // Impresión
     for(int renglon = 0; renglon < RENGLONES; renglon++) {
         for(int columna = 0; columna < COLUMNAS; columna++) {

             printf("%d ", bidimensional[renglon][columna]);
         }
         printf("\n");
     }

    return 0;
}