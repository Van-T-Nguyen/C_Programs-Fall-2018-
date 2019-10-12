/* 
Program: count.c
Author: Van Nguyen
Date Created: 9/18/2018
Description: This program takes an int and prints it and up to 10 numbers above it
*/
	
#include <stdio.h>

void count(void);

int main(void)
{
	count();
	getchar();
	getchar();
	return 0;
}

void count(void)
{
	int count, loop;
	loop = (0);
	printf("This program takes an int and prints it and up to 10 numbers above it.\n");
	printf("Please enter a number: ");
	scanf("%d", &count);
	while (loop++ < 11)
	{
		printf("    Number\n");
		printf("    %3d\n\n", count);
		count++;
	}
}
	
	
	
	