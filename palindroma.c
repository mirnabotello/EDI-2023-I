#include <stdio.h>

void imprimeNumeros(int n);
void imprimeNumerosRecursiva(int n);
int palindromaRecursivo(int arr[10], int inicio, int fin);

int main() {

    int array[10] = {1, 2,3,4,5,5,6,3,2,1};

    //   1 2 3 4 5 5 4 3 2 1
    //     2 3 4 5 5 4 3 2
    //       3 4 5 5 4 3
    //         4 5 5 4
    //           5 5

    //   1 2 3 4 5 5 6 3 2 1  -> 0
    //     2 3 4 5 5 6 3 2  -> 0
    //       3 4 5 5 6 3  -> 0
    //         4 5 5 6  -> 0

    // 1.  Definir el caso base - simple que puedo hacer para regresarme
    //      -  Este en medio del arreglo y que tenga 1 o 2 elementos a comparar
    // 2.  Definir el caso recursivo - Cuando voy a volver a llamar a la función
    //

    int esPalindroma = palindromaRecursivo(array, 0, 9);

    if(esPalindroma == 1)
        printf("Es palindroma");
    else
        printf("No es palindroma");
    return 0;
}

int palindromaRecursivo(int arr[10], int inicio, int fin) {

    int esPalindroma;

    if(inicio == 5 || fin == 5) { // Ya estoy en medio
        if(inicio == fin) // Tamaño del arreglo es impar y solo hay un valor
            return 1;
        else
            if(arr[inicio] == arr[fin])
                return 1;
            else
                return 0;
    }
    else
        if(arr[inicio] == arr[fin]){
            esPalindroma = palindromaRecursivo(arr, inicio + 1, fin - 1);
            return esPalindroma;
        }
}

void imprimeNumeros(int n)
{
    for(int i = n; i >= 0; i--){
        printf("%d ", i);
    }
}

void imprimeNumerosRecursiva(int n)
{
    if(n == 0) {  // Caso base -
        printf("%d", n);
        return;
    } else {
        printf("%d ", n);
        imprimeNumerosRecursiva(n - 1);
    }
}