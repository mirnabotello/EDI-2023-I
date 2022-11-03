//
//  main.c
//  Tarea 5 U2
//
//  Created by Leo Vedovatti on 17/10/22.
//  Copyright © 2022 Leo Vedovatti. All rights reserved.
//

#include <stdio.h>

void intercambiar(int *pos, int *ant) {
    int aux = *ant;
    *ant = *pos;
    *pos = aux;
}

void insercion(int lista[], int longitud){
    for(int posicion=1; posicion < longitud; posicion++){
        for(int i=posicion; i >=0; i--){
            int anterior = i-1;
            if( (lista[i])<(lista[i-1]) ){
                printf("Control i: %d\n", i);
                intercambiar(&lista[posicion], &lista[anterior]);
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    int longitud;
    //captura
    printf("Introduzca la cantidad de elementos: ");
    scanf("%d",&longitud);
    printf("\n");
    int lista[longitud];
    for(int y=0; y<longitud; y++){
        printf("Introduzca el elemento número %d: ", y+1);
        scanf("%d",&lista[y]);
    }

    insercion(lista, longitud);

    //imprimir
    for(int x=0; x<longitud; x++){
        printf("[%d]", lista[x]);
    }
    printf("\n");

    return 0;
}
