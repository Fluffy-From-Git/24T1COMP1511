#include <stdio.h>

#define SIZE 4

int main(void) {

    /*
        Prints
        0X00
        XXXX
        0X00
        0X00

        all the X's occur when col == 1 OR row == 1
    */
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col != 1 && row != 1) {
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
