#include <stdio.h>
#include <strings.h>

//  Nombre, edad, calificaciones de 3 parciales
//  Arreglos de estructuras

#define PARCIALES 3
#define NO_ALUMNOS 4

struct alumno {
    char nombre[50];
    int edad;
    float calificaciones[PARCIALES];
};

void capturaAlumno(struct alumno *a);
float promedioAlumno(struct alumno a);
float promedioParcial(struct alumno clase[NO_ALUMNOS], int parcial);
void capturaArreglo(struct alumno clase[NO_ALUMNOS]);

int main()
{
    struct alumno claseEstructuras[NO_ALUMNOS];
    float promedio;

    capturaArreglo(claseEstructuras);

    promedio = promedioParcial(claseEstructuras, 1);

    printf("El promedio del primer parcial en el grupo es: %f\n", promedio);

    return 0;
}

void capturaArreglo(struct alumno clase[NO_ALUMNOS])
{
    float promedio;

    for(int i = 0; i < NO_ALUMNOS; i++)
    {
        capturaAlumno(&clase[i]);
        promedio = promedioAlumno(clase[i]);
        printf("El promedio del alumno %s es: %f\n", clase[i].nombre, promedio);
    }
}

float promedioParcial(struct alumno clase[NO_ALUMNOS], int parcial)
{
    float suma = 0;

    for(int i = 0; i < NO_ALUMNOS; i++){

        suma += clase[i].calificaciones[parcial - 1];
    }

    return suma / NO_ALUMNOS;
}

float promedioAlumno(struct alumno a) {

    float suma = 0;
    int parcial;

    for(parcial = 0; parcial < PARCIALES; parcial++)
    {
        suma += a.calificaciones[parcial];
    }

    return suma / PARCIALES;
}

void capturaAlumno(struct alumno *a) {

    printf("Nombre del Alumno: ");
    scanf("%s", a->nombre);  // (*a).nombre
    printf("Edad: ");
    scanf("%d", &a->edad);

    for(int parcial = 0; parcial < PARCIALES; parcial++)
    {
        printf("Dame la calificación del parcial %d: ", parcial + 1);
        scanf("%f", &a->calificaciones[parcial]);
    }
}