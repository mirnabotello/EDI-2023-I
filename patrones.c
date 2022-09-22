#include <stdio.h>

#define ARRAY_SIZE 10

void createPattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]);
void printPattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]);

int main() {

    int pattern[ARRAY_SIZE][ARRAY_SIZE];

    createPattern(pattern);
    printPattern(pattern);

    return 0;
}

void createPattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]) {
    int r, c;
//        OPCION 3
//        int valor = 0;

    for(r = 0; r < ARRAY_SIZE; r++) {
//        OPCION 3
//        if(r % 2 == 0)
//            valor = 1;
//        else
//            valor = 0;
        for(c = 0; c < ARRAY_SIZE; c++) {

            if(r % 2 == 0) {
                if(c % 2 == 0)
                    pattern[r][c] = 0;
                else
                    pattern[r][c] = 1;
            } else {
                if(c % 2 == 0)
                    pattern[r][c] = 1;
                else
                    pattern[r][c] = 0;
            }

//          OPCION 2
//            pattern[r][c] = r % 2 == 0 ? c % 2 == 0 : c % 2 != 0;

//          OPCION 3
//            pattern[r][c] = valor;
//            valor = valor == 1 ? 0 : 1;
        }
    }
}

void printPattern(int pattern[ARRAY_SIZE][ARRAY_SIZE]) {
    int r, c;

    for(r = 0; r < ARRAY_SIZE; r++) {
        for(c = 0; c < ARRAY_SIZE; c++) {
            printf("%d ", pattern[r][c]);
        }
        printf("\n");
    }
}