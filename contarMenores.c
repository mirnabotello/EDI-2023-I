#include <stdio.h>

#define SIZE 5

void countSmaller(int n[SIZE], r[SIZE]);

int main() {
    int nums[SIZE] = {8,1,2,8, 3};
    int result[SIZE] = {0,0,0,0,0};

    countSmaller(nums, result);

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}

void countSmaller(int nums[SIZE], result[SIZE])
{
    int count = 0;

    for(int i = 0; i < SIZE; i++)  //  Recorrer los valores del arreglo
    {
        for(int j = 0; j < SIZE; j++)  // Búsqueda secuencial
        {
            // Aquí falta checar que no compare el valor externo
            if(nums[i] != nums[j] && nums[i] > nums[j])
                count++;
        }

        result[i] = count;
        count = 0;
    }
}