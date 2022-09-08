#include <stdio.h>

#define MAX_ALUMNOS 100

///  Capturar las calificaciones de los alumnos en un arreglo
///  Obtener el promedio de esos alumnos e imprimirlo

// 1.  Que necesito para trabajar ->
//      1.1 En donde la voy a guardar
// 2.

// Prototipo de la función  - Avisan que existe una función
void capturaCalificaciones(float calif[MAX_ALUMNOS], int nAlumnos);
float calculaPromedio(float *calif, int alumnos);

int main()
{
  float calificaciones[MAX_ALUMNOS];
  int noAlumnos;
  float promedio;

  printf("Numero de alumnos (maximo 100):");
  scanf("%d", &noAlumnos);

  capturaCalificaciones(calificaciones, noAlumnos);  // Llamada a la función
  promedio = calculaPromedio(calificaciones, noAlumnos);

  return 0;
}

//  Definición de la función
float calculaPromedio(float *calif, int alumnos)
{
    float suma = 0;

}

void capturaCalificaciones(float calif[MAX_ALUMNOS], int nAlumnos)
{
    for(int alumnoActual = 0; alumnoActual < nAlumnos; alumnoActual++)
    {
        printf("calificacion[%d]: ", alumnoActual);
        scanf("%f", &calif[alumnoActual]);
    }
}