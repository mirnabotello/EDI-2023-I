#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

// Validar que la hora este en un formato correcto

int main() {

    char hora[SIZE];  // Cadenas de caracteres
    int longitud;
    char *posicion;
    char horas[3], minutos[3];
    int horaNumero, minutosNumero;

    printf("Dame la hora en formato 24hrs: "); // 21:46 ->  02:25
    scanf("%s", hora);

    longitud = strlen(hora);   //  Longitud de la cadena ->  5

    if(longitud == 5) // tiene la longitud correcta
    {
        printf("Tiene la longitud correcta\n");
        posicion = strstr(hora, ":");

        if(posicion == NULL) {
            printf("El formato es incorrecto - Faltan los dos puntos\n");
        } else {
            //  Si encontró los dos puntos
            strncpy(horas, hora, 2);
            strncpy(minutos, hora + 3, 2);

            horaNumero = atoi(horas);
            minutosNumero = atoi(minutos);

            if(horaNumero >= 0 && horaNumero <= 23  && minutosNumero >= 0 && minutosNumero <= 59) {
                printf("La hora es correcta\n");
            } else {
                printf("La hora es incorrecta\n");
            }
        }
    }
    else {
        printf("El formato es incorrecto\n");
    }

    return 0;

}