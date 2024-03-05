// functions.c
//
// Written by YOU GUYS
// on March 2024
//
// This program is a simple demonstration of functions

/*
    Examples when we could use functions
        -
        -
        -
        -
        -
        -
        -

*/

#include <stdio.h>

int power(int base, int power);

int main(void) {
    int result;
    int num1 = 5;
    int num2 = 3;

    result = power(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

int power(int base, int power) {
    int result = 1;
    for(int i = 0; i < power; i++) {
        result *= base;
    }
    return result;
}
// TODO: Function definition
// return_type function_name(parameters) {
//     // function body 

//     return value;
// }
