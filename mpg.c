/* 
Program: mpg.c
Author: Van Nguyen
Date Created: 8/27/2018
Description:This program takes user input of miles and gallons
and calculates the mile per gallon amount
*/

#include <stdio.h>

void mpg(void);

int main(void)
{
	mpg(); // Calls mpg function
	// getchar() keeps the console window open
	getchar();
	getchar();
	return 0;
	
	
}

void mpg(void)
{
	int miles; // Initialization
	int gallons;
	float miles_per_gallon;
	printf("Please enter the number of miles driven: ");
	scanf("%d", &miles); // Takes user input
	printf("Miles entered is %d: \n", miles);
	printf("Please enter the amount of gallons used: ");
	scanf("%d", &gallons);
	printf("Gallons entered is %d: \n", gallons);
	miles_per_gallon = ((float) miles / gallons);
	printf("The miles per gallons is: %.2f", miles_per_gallon); // Prints out the results
}