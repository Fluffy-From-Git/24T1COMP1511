// part1_while_loops.c
//
// Written by Ibrahim Ghoneim (z5470570) 
// on February 2024
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
	printf("Start of loop!");

	// This is a counter
    int counter = 0;
	/* syntax is 
		while (condition) { 
			code 
		}
		in the code, there must be a way to change the condition otherwise the loop will run forever
	*/
	while (counter < 10) {
		printf("%d\n", counter);
		counter++;
	}

	printf("End of loop!");

    return 0;
}
