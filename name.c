/* 
Program: name.c
Author: Van Nguyen
Date Created: 9/12/2018
Description: This program prints out a name in blah blah
*/

#include <stdio.h>
#include <string.h>

void name(void);

int main(void)
{
	name();
	getchar();
	getchar();
	return 0;
}

void name(void)
{
	char first[12], last[12];
	int first_len, second_len;
	printf("Please enter your first name here: ");
	scanf("%s", first);
	first_len = strlen(first);
	printf("Please enter your second name here: ");
	scanf("%s", last);
	second_len = strlen(last);
	printf("%*s %*s\n",first_len, first, second_len, last);
	printf("%*d %*d\n", first_len, first_len, second_len, second_len);
	printf("%-*s %-*s\n", first_len, first, second_len, last);
	printf("%-*d %-*d\n", first_len, first_len, second_len, second_len);
	
	
}