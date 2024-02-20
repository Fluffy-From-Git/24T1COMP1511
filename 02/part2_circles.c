// part2_circles
//
// This program was written by Ibrahim Ghoneim z5470570,
// on 19/02/2024
//
// This program calculates the area of a circle

#include <stdio.h>
#define PI 3.14

int main(void) {
	// Declaring the variable
	/*
		print a prompt
		scanf double radius
		do maths
		print out maths
	*/

	// printing prompt
	printf("What's the radius of the circle?");

	// scanning radius
	double radius;
	scanf("%lf", &radius);

	// doing maths
	double area = PI * radius * radius;

	// printing maths
	printf("The area of the circle with radius %lf is %lf\n", radius, area);


	// us messing with ascii keyboard
	int alpha = 72;
	printf("the number %d is %c on the ascii table", alpha, alpha);
	
	return 0;
}
