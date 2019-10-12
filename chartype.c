/* 
Program: chartype.c
Author: Van Nguyen
Date Created: 10/12/2018
Description: This program counts the number of different types of characters until the user ends input
*/

#include <stdio.h>   
#include <ctype.h>
#pragma warning(disable:4996)

void chartype(void);

int main(void)
{
	chartype();
	getchar();
	getchar();
	return 0;
}

void chartype(void)
{
	char ch;
	int upper, lower, other;
	upper = 0;
	lower = 0;
	other = 0;
	printf("This program will count types characters entered until EOF is reached.\n(Ctrl+D for UNIX/Linux, and Ctrl+Z for Windows)\n");
	while((ch = getchar()) != EOF)
	{
		if(isupper(ch))
		{
			upper++;
		}
		else if(islower(ch))
		{
			lower++;
		}
		else
		{
			if(ch != '\n' && ch!= '\t' && ch!= ' ')
			{
				other++;
			}
		}
	}
	printf("There are %d uppercase, %d lowercase, and %d other character(s) in this program", upper, lower, other);
}