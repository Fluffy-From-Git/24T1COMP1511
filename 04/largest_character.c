/*
    Created by Ibrahim Ghoneim 04/03/2024
    z5470570
    This program will find the largest character in a character array.
*/

#include <stdio.h>

#define MAX_SIZE 8

int main(void) {
    //Create a character array with exactly 8 elements.

    char characters[MAX_SIZE] = {'d', 'b', 'c', 'a', 'f', 'y', 'h', 'i'};

    // Create a character variable called largest_character, 
    // equal to the first character of the array.
    // Remeber we index from 0.
    char largest_character = characters[0];

    //Create a while loop to loop through the character array.

    int index = 0;
    while (index < MAX_SIZE) {
        // notice that we are comparing the ascii value of the characters
        // this might cause problems if the characters are not in the same case
        if (characters[index] > largest_character) {
            // if the current character is larger than the largest character
            // then we update the largest character to be the current character
            largest_character = characters[index];
        }
        index++;
    }

    //Print out the largest character you've found.
    printf("The largest character is: %c\n", largest_character);

    return 0;
}