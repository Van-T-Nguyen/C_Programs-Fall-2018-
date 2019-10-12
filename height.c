/* 
Program: height.c
Author: Van Nguyen
Date Created: 9/12/2018
Description: This program takes the users name and height in inches and prints out a message with the height 
converted to feet
*/

#include <stdio.h>

void height(void);

int main(void)
{
	height();
	getchar();
	getchar();
	return 0;
	
}

void height(void)
{
	char name[13];
	float inches, feet;
	printf("Please enter your name: ");
	scanf("%s", name);
	printf("Please enter your height in inches: ");
	scanf("%f", &inches);
	feet = (inches / 12);
	printf("%s, you are %.3f feet tall.", name, feet);
}
	
	
	