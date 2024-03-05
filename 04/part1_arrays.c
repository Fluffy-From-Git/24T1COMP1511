// part1_arrays.c, odd_only
//
// Written by YOUR-NAME (YOUR-ZID)
// on TODAYS-DATE 
//
// This program adds 1 to any odd element in an array and after prints 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {
    int array[5] = {1, 2, 3, 4, 5};

    int i = 0;

    while (i < SIZE) {
        printf("during i loop\n");
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++;
    }

    int j = 0;
    while (j < SIZE) {
        printf("%c ", array[j]);
        j++
    }

    printf("\n");

    return 0;
}
