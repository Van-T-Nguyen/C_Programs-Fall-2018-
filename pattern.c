/* 
Program: pattern.c
Author: Van Nguyen
Date Created: 9/25/2018
Description: This program prints letters from F to A in a pattern
*/

#include <stdio.h>
#define ROWS 6

void pattern(void);

int main(void)
{
	pattern();
	getchar();
	getchar();
	return 0;
}

void pattern(void)
{
	char ch;
	int rows, columns, i;
	i = 6;
	
	for (rows = 0; rows < ROWS; rows++)
	{
		for (columns = i, ch = 'F'; columns <= ROWS; columns++, ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
		i--;
	}
}