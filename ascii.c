/* 
Program: ascii.c
Author: Van Nguyen
Date Created: 10/12/2018
Description: This program counts the number of characters until the user ends input
*/

#include <stdio.h>   
#pragma warning(disable:4996)

void ascii(void);

int main(void)
{
	ascii();
	getchar();
	getchar();
	return 0;
}

void ascii(void)
{
	char ch;
	int loop = 0;
	int reset = 1;
	printf("This program takes input from the user and prints the char and their respective ASCII value.\n");
	printf("Please enter characters here: ");
	//printf("Char:    ASCII:\n");
	while((ch = getchar()) != EOF)
	{
		if(reset)
		{
			printf("Char:    ASCII:\n");
			reset--;
		}
		while(loop < 10)
		{
			if(ch == '\t')
			{
				printf(" \\t %9d\n", ch, ch);
				loop++;
				ch = getchar();
			}
			else if (ch == '\n')
			{
				printf(" \\n %9d\n", ch, ch);
				printf("\n");
				ch = getchar();
				printf("Char:    ASCII:\n");
				printf("%3c %9d\n", ch, ch);
				loop = 1;
				ch = getchar();
			}
			else if (ch == ' ')
			{
				printf(" 'space' %4d\n", ch, ch);
				loop++;
				ch = getchar();
			}
			else
			{
				printf("%3c %9d\n", ch, ch);
				loop++;
				ch = getchar();
			}
		}
		printf("\n");
		loop = 0;
		reset++;
		ch = getchar();
		continue;
	}
}