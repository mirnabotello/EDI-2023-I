#include <stdio.h>

int main() {

    //  while
    //  do - while
    //  for - cuando sabemos cuantas vueltas va a dar
    //  Sintaxis:  for(inicialización; condicion; incremento/decremento) { // instrucciones }

    int contador;
    int datoUsuario;

    printf("Dame un número: ");
    scanf("%d", &datoUsuario);

    for(contador = datoUsuario; contador <= 10; contador++)
    {
        printf("%d\n", contador);
    }

    return 0;
}