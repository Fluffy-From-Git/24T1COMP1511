// face.c
//
// Written by Ibrahim Ghoneim (z5470570),
// on 12/02/2024 
//
// The program prints two simple faces
//
// Face 1:
//  ~ ~
//  0 0
//   o
//   -
//
// Face 2:
//  ~ ~
//  0 0
//   o
//  \_/

#include <stdio.h>

int main(void) {

    /*
        \n represents a new line, the "\" character is an escape
        sequence which reads the next character to do something
    */
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o \n");
    // "\\" ise used to print 1 backslash
    printf("\\_/\n");
    return 0;
}

