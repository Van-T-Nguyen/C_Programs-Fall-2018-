/* 
Program: sq_cube.c
Author: Van Nguyen
Date Created: 9/25/2018
Description: This program prints letters from F to A in a pattern
*/

#include <stdio.h>

void sq_cube(double lower,double upper); //Initializes function

int main(void)
{
	double small, big;
	printf("Please enter the lower and upper limits for the power table: ");
	scanf("%lf %lf", &small, &big); //Passes off data to function
	sq_cube(small, big);
	getchar();
	getchar();
	return 0;
}

void sq_cube(double lower, double upper)
{
	for (; lower <= upper; lower++)
	{
		printf("Number   Squared   Cubed\n");
		printf("%5.2lf %10.2lf %8.2lf\n", lower, lower * lower, lower * lower * lower);
	}
}