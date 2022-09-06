#include <stdio.h>

int main(){

    //  Arreglos es una forma de almacenar datos del mismo tipo en una variable
    //  que se almacenan en memoria de forma contigua

    int calificaciones[25];
    int suma = 0;
    float promedio;

    for(int noLista = 0; noLista < 25; noLista++)
    {
        calificaciones[noLista] = 0; // Entre corchetes es la posición, la casilla o el índice
    }

    for(int noLista = 0; noLista < 25; noLista++)
    {
        printf("Dame la calificación del noLista %d: ", noLista);
        scanf("%d", &calificaciones[noLista]);
    }

    for(int noLista = 0; noLista < 25; noLista++)
    {
        suma = suma + calificaciones[noLista];
    }

    promedio = (float)suma / 25;



    return 0;
}