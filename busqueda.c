#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void llenaArreglo(int arreglo[MAX]);
void imprimeArreglo(int arreglo[MAX]);
int busqueda(int arreglo[MAX], int valorABuscar);

//  Búsqueda secuencial
//  Búsqueda binaria

//  Búsqueda secuencial.

int main() {

    int valores[MAX];
    int noBuscado = 10;
    int posicionFinal;

    llenaArreglo(valores);

    valores[6] = 10;

    imprimeArreglo(valores);

    posicionFinal = busqueda(valores, noBuscado);

    if(posicionFinal >= 0 && posicionFinal < 8) {
        printf("El valor %d se encuentra en la posición %d", noBuscado, posicionFinal);
    } else {
        printf("El valor no se encuentra en el arreglo");
    }

    return 0;
}

void llenaArreglo(int arreglo[MAX]) {

    for(int indice = 0; indice < MAX; indice++) {
        arreglo[indice] = rand() % 11;
    }

}

void imprimeArreglo(int arreglo[MAX]) {

    for(int indice = 0; indice < MAX; indice++) {
        printf("%d ", arreglo[indice]);
    }

    printf("\n\n");
}

int busqueda(int arreglo[MAX], int valorABuscar) {

    int indice;
    int posicionFinal = -1;

    for(indice = 0; indice < MAX && posicionFinal == -1; indice++){
        if(arreglo[indice] == valorABuscar){
            posicionFinal = indice;
            //break;
        }
    }

    indice = 0;
    do{
        if(arreglo[indice] == valorABuscar){
            posicionFinal = indice;
            //break;
        }
        indice++;
    }while(posicionFinal == -1 && indice < MAX);

    return posicionFinal;
}

