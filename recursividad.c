#include <stdio.h>

#define SIZE 10

int sumArrayRecursive(int startIndex, int array[SIZE]);

int main() {

    int array[SIZE] = {3,5,2,6,8, 6,8,0,1,4};

    int total = sumArrayRecursive(0, array);

    printf("Total Sum = %d", total);

    return 0;
}

int sumArrayRecursive(int startIndex, int array[SIZE]) {

    if(startIndex == SIZE - 1)
        return array[startIndex];

    return array[startIndex] + sumArrayRecursive(startIndex + 1, array);
}