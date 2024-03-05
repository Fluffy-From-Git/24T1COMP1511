/*
    Created by Ibrahim Ghoneim 04/03/2024
    z5470570
    This program copies the elements of an array to another array
*/

#include <stdio.h>

int main(void) {

    // Create an array of doubles with 3 elements, each with a non-zero value.
    double small_array[3] = {1.1, 2.2, 3.3};
    //Create another array of doubles with 10 elements where every element initialised to 0.0.
    double big_array[10] = {0.0};

    //Create a while loop that loops through every element of the first array.
    for(int i = 0; i < 3; i++) {
        big_array[i] = small_array[i];
    }
    //Copy the elements of the first array into the second array (leave 0's at the end)

    
    //Create a while loop that prints out all the elements of the second array.
    int j = 0;
    while (j < 10) {
        printf("index %d has the double %lf\n", j, big_array[j]);
        j++;
    }

    return 0;
}