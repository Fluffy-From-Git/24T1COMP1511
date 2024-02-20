// part1_variables
//
// This program was written by Ibrahim Ghoneim, z5470570
// on 19/02/2024
//
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
	// 1. Declare the variables
    // - [data_type] [variable_name]
    int age;
    char grade;
    double pi;
	
    // 2. Initalise the variables
    age = 18;
    grade = 'A';
    pi = 3.14159;

    // 3. Print the variables
    printf("I am %d, I want to get a grade of %c and for some reason this is PI : %lf\n", age, grade, pi);
    
    // 4. Reassign the values of some of the variables
    age = 19;

	// 5. Print the variables
    printf("I am %d, I want to get a grade of %c and for some reason this is PI : %lf\n", age, grade, pi);

	return 0;
}
