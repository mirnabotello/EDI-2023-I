#include <stdio.h>

void funcionValor(int valor);
void funcionReferencia(int *direccion);

void funcionArreglo(int arr[10]);
void funcionArreglo2(int *arr);

int main() {

    int a;
    int arreglo[10];

    funcionArreglo(arreglo);  // Los arreglos cuando los pasan completos siempre pasan por referencia
    funcionArreglo2(arreglo);

    funcionValor(arreglo[1]);
    funcionReferencia( &arreglo[1]);

    return 0;
}

void funcionArreglo(int arr[10]) {

    for(int indice = 0; indice < 10; indice++){

        arr[indice] = 100;
    }
}

void funcionArreglo2(int *arr) {

    for(int indice = 0; indice < 10; indice++){

        arr[indice] = 200;
    }
}

void funcionValor(int valor) {
    valor = 10;
}

void funcionReferencia(int *direccion) {
    *direccion = 10;
}