#include <stdio.h>

//  Capturen las calificaciones de los 3 parciales de una materia EDI - Junto con el nombre del alumno
//  e imprimirlas

#define NO_PARCIALES 3
#define NO_ALUMNOS   2

int main() {

    char nombre[NO_ALUMNOS][50];
    float calificaciones[NO_ALUMNOS][NO_PARCIALES];

//    char cadena[50];
//
//    printf("Dame un nombre: ");
//    scanf("%s", cadena);

//    printf("El nombre que capturaste fue:  %s", cadena);

    for(int alumno = 0; alumno < NO_ALUMNOS; alumno++) {
        printf("Dame el nombre del alumno: ");
        scanf("%s", nombre[alumno]);

        for(int parcial = 0; parcial < NO_PARCIALES; parcial++) {
            printf("Dame la calificacion del parcial %d: ", parcial + 1);
            scanf("%f", &calificaciones[alumno][parcial]);
        }
    }

    // Función que calcule el promedio por parcial
    //  Que necesita para trabajar:
    //      1.  calificaciones
    //      2.  parcial
    //  Regresar:
    //      1.  El promedio del parcial que le dí

    // Función que calcule el promedio por alumno
    //  Que necesita:
    //      1.  Calificaciones
    //      2.  Que alumno quieres promediar
    //  Regresar:
    //      1.  El promedio de los 3 parciales del alumno que le dije

    return 0;
}


/*

 Mirna  10 10 10
 Juan    8  8  7
 Gabriel 10 7  9

 * */