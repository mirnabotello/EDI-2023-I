#include <stdio.h>

void ordenaValores(int a, int b, int c);
void ordenaValoresReferencia(int *dirA, int *dirB, int *dirC);   // int * ->  la variable almacena una dirección

//  a b c            a  b  c
// 10 3 10   --->    3  7  10
//  3 10

//  Función:
//   1.  Comparar para saber cual es el valor menor -> a
//          a > b  -> intercambia -->  a tiene el valor menor entre a y b
//          a > c  -> intercambia -->  a tiene el valor menor entre a y c
//               ---->  a tiene el valor menor de los 3
//          b > c  -> intercambia -->  b tiene el valor menor entre b y c
///              ---->  ya están ordenados  - a , b, c

int main()
{
    int a, b, c;

    printf("Valor a: ");
    scanf("%d", &a);

    printf("Valor b: ");
    scanf("%d", &b);

    printf("Valor c: ");
    scanf("%d", &c);

    // Acomodar los valores en forma ascendente  a - menor  b - medio  c - mayor
    ordenaValores(a, b, c);

    printf("Sin direcciones: %d - %d - %d\n", a, b, c);

    //  Paso de parámetros por referencia
    //  - Función - donde viven las variables originales
    //            - para que pueda modificarlas directamente dentro de la función

    ordenaValoresReferencia(&a, &b, &c);  // & - Obtener la dirección de la variable

   printf("Con direcciones:  %d - %d - %d\n", a, b, c);

    return 0;
}

void ordenaValoresReferencia(int *dirA, int *dirB, int *dirC)
{
    int aux;

    if(*dirA > *dirB) {
        aux = *dirB;
        *dirB = *dirA;
        *dirA = aux;
    }
    if(*dirA > *dirC){
        aux = *dirC;
        *dirC = *dirA;
        *dirA = aux;
    }
    // *dirA tiene el valor menor de todos
    if(*dirB > *dirC){
        aux = *dirC;
        *dirC = *dirB;
        *dirB = aux;
    }
}


void ordenaValores(int a, int b, int c)
{
    int aux;
    if(a > b){
        aux = b;
        b = a;
        a = aux;
    }
    if(a > c){
        aux = c;
        c = a;
        a = aux;
    }
    //  a tiene el valor menor de los 3
    if(b > c) {
        aux = b;
        b = c;
        c = aux;
    }
}