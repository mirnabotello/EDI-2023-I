#include <stdio.h>

//  Función que reciba 2 números y regrese cual es el número mayor
//  1.  Qué necesito para trabajar -
//      1.1 - Números -> int
//  2.  Qué voy a hacer con esos datos - Procesamiento

//  Declaración de funciones prototipo
int obtenerNumeroMayor(int primerValor, int segundoValor);

int main()
{
    // Organizar nuestro código - fácil de leer
    // Reutilizar el código
    int primero, segundo;
    int mayor;
    int tercero, cuarto;

    printf("Dame el primer número: ");
    scanf("%d", &primero);

    printf("Dame el segundo número: ");
    scanf("%d", &segundo);

    mayor = obtenerNumeroMayor(primero, segundo);

    printf("Primero:  %d\nSegundo: %d\n", primero, segundo);
    printf("El mayor es:  %d", mayor);

    printf("Dame el tercer número: ");
    scanf("%d", &tercero);

    printf("Dame el cuarto número: ");
    scanf("%d", &cuarto);

    mayor = obtenerNumeroMayor(tercero, cuarto);

    printf("El valor mayor entre tercero y cuarto es:  %d\n", mayor);

    return 0;
}

// Función - Definición (cómo va a hacer su trabajo)
//  1.  Que regresa
//  2.  Nombre significativo
//  3.  Que necesita para trabajar - parámetros
//      3.1  tipo
//      3.2  nombre

int obtenerNumeroMayor(int primerValor, int segundoValor)  // Encabezado de la función
{
    int mayor;

    if(primerValor > segundoValor)
        mayor = primerValor;
    else if(segundoValor > primerValor)
        mayor = segundoValor;
    else
        mayor = 0;

    return mayor;
}

