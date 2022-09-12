#include <stdio.h>
#include <string.h>

#define SIZE 20

int main() {

    char hora[SIZE];  // Cadenas de caracteres
    int longitud, posicionDosPuntos;

    printf("Dame la hora en formato 24hrs: ");
    scanf("%s", hora);

    longitud = strlen(hora);

    if(longitud == 5) // tiene la longitud correcta
    {
        printf("Tiene la longitud correcta");
        posicionDosPuntos = strcspn(hora, ":");
    }
    else {
        printf("El formato es incorrecto");
    }

    printf("Hora: %s", hora);

    return 0;

}