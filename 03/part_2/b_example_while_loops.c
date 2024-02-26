#include <stdio.h>

#define SIZE 4

int main(void) {

    /*
        Prints
        0X0X
        0X0X
        0X0X
        0X0X

        all the 0's occur when col % 2 == 0 (i.e. col is even)
    */
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col % 2 == 0) {
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
