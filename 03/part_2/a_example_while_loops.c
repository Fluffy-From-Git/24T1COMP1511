#include <stdio.h>

#define SIZE 4

int main(void) {
    /*
        Prints
        0XXX
        X0XX
        XX0X
        XXX0

        all the 0's occur when row == col
    */
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
    return 0;
}
