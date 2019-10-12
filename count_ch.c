/* 
Program: count_ch.c
Author: Van Nguyen
Date Created: 10/12/2018
Description: This program counts the number of characters until the user ends input
*/

#include <stdio.h>   
#pragma warning(disable:4996)

void count_ch(void);

int main(void)
{
	count_ch();
	getchar();
	getchar();
	return 0;
}

void count_ch(void)
{
	char ch;
	int count;
	printf("This program will count characters entered until EOF is reached. (Ctrl+D for UNIX/Linux, and Ctrl+Z for Windows)\n");
	while((ch = getchar()) != EOF)
	{
		if(ch != '\n' && ch!= '\t' && ch!= ' ')
		{
			count++;
		}
	}
	printf("The number of characters is: %d", count);
}