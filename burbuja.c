#include<stdio.h>
#include<time.h>
#include <stdlib.h>

#define SIZE 100000

void printArray(int arr[SIZE]);
void bubbleSort(int arr[SIZE]);
void insertionSort(int arr[SIZE]);
void quickSort(int arr[SIZE], int start, int end);
int sortPivot(int arr[SIZE], int start, int end);
void swap(int *val1, int *val2);
void fillArray(int arr[SIZE]);

int main()
{
    int array[SIZE];

    fillArray(array);

    time_t startSeconds, endSeconds;

    printArray(array);
    printf("\n");
    //
    //;

    // 1.  ARREGLO ALEATORIO
    // 2.  ARREGLO ORDENADO
    // 3.  ARREGLO INVERTIDO

    startSeconds = time(NULL);
    bubbleSort(array);
    endSeconds = time(NULL);

    printf("\nLos segundos que se tardó burbuja fueron %ld\n", endSeconds-startSeconds);

    startSeconds = time(NULL);
    insertionSort(array);
    endSeconds = time(NULL);

    printf("\nLos segundos que se tardó inserción directa fueron %ld\n", endSeconds-startSeconds);


    startSeconds = time(NULL);
    quickSort(array, 0, SIZE - 1);
    endSeconds = time(NULL);

    printf("\nLos segundos que se tardó quicksort directa fueron %ld\n", endSeconds-startSeconds);


    printArray(array);

    printf("\nLos segundos que se tardó quicksort fueron %ld\n", endSeconds-startSeconds);

    return 0;
}

void fillArray(int arr[SIZE]) {

    srand (time(NULL));

    for(int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }
}

void insertionSort(int arr[SIZE])
{
    for(int iteracion = 1; iteracion < SIZE; iteracion++)
    {
        for(int j = iteracion; j > 0 && arr[j] < arr[j-1]; j--) {
            //printf("arreglo[%d] = %d < arreglo[%d] = %d\n", j, arr[j], j-1, arr[j-1]);
            if(arr[j] < arr[j-1])
                swap(&arr[j], &arr[j-1]);
        }
        //printArray(arr);
    }
}

void bubbleSort(int arr[SIZE])
{
    for(int iteracion = 0; iteracion < SIZE - 1; iteracion++) {
        for (int actual = 0; actual < SIZE - 1; actual++) {
            if (arr[actual] > arr[actual + 1]) {
                swap(&arr[actual], &arr[actual + 1]);
            }
        }
        printf("Iteracion %d: ", iteracion + 1);
        //printArray(arr);
    }
}

void quickSort(int arr[SIZE], int start, int end) {
    int posPivot;
    // Caso base, solo tengo un elemento o no tengo ninguno
    if (start == end || start > end) {
        printf("start: %d - end: %d - CASO BASE\n", start, end);
        return;
    } else {
        // Caso recursivo
        // Acomodar el pivote - División de arreglo
        // llamar a quicksort acomode parte izquierda del pivote
        // llamar a quicksort acomode parte derecha del pivote
        posPivot = sortPivot(arr, start, end);

//        printf("start: %d - end: %d - posPivot: %d [", start, end, posPivot);
//        printArray(arr);
//        printf("]\n");

        quickSort(arr, start, posPivot - 1);
        quickSort(arr, posPivot + 1, end);


    }
}

int sortPivot(int arr[SIZE], int start, int end) {
    int pivot = arr[end];
    int left = start;
    int right = end - 1;

    while (right > left) {
        while (arr[left] <= pivot && left < end && left <= right) {
            left++;
        }

        while (arr[right] > pivot && right >= start && right >= left) {
             right--;
        }

        if (right > left) {
            swap(&arr[left], &arr[right]);
        }
    }

    swap(&arr[end], &arr[left]);

    return left;
}

void swap(int *val1, int *val2)
{
    int aux;

    aux = *val1;
    *val1 = *val2;
    *val2 = aux;
}

void printArray(int arr[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
   // printf("\n");
}