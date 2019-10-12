/* 
Program: hour.c
Author: Van Nguyen
Date Created: 9/18/2018
Description: This program converts time in minutes to time in minutes per hour
*/

#include <stdio.h>
#include <stdlib.h> //Allows for the exit function
#define MIN_IN_HR 60 //defines MIN_IN_HR

void hour(void);

int main(void)
{
	hour();
	getchar();
	getchar();
	return 0;
}

void hour(void)
{
	int time, min, hr;
	printf("This program converts time in minutes to time in minutes per hour.\n");
	printf("Please enter a value for time in minutes or enter 0 to exit: ");
	scanf("%d", &time);
	while (time != 0)
	{
		hr = (time / MIN_IN_HR);
		min = (time % MIN_IN_HR);
		printf("%d minutes is also %d hour(s) and %d minute(s)\n", time, hr, min);
		printf("Please enter a value for time in minutes or enter 0 to exit: "); //sets up for further loops
		scanf("%d", &time);
	}
	printf("Goodbye!"); //Exit function and message
	exit(0);
}	