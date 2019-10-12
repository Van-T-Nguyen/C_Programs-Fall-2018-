/* 
Program: to_while.c
Author: Van Nguyen
Date Created: 9/25/2018
Description: This program prints a string backwards
*/
#include <stdio.h>
#include <string.h>

void to_while(void);

int main(void)
{
	to_while();
	getchar();
	getchar();
	return 0;
}

void to_while( void )
{
	// Initializes the 3 variables used in the program
	char input[81];
	int i;
	int length;
	
	// Takes user input and assigns it to input
	printf("Enter a word: ");
	scanf("%s", input);
	//Assigns the length of input to length
	length = strlen(input);
	//Assigns i with one less than length
	i = length - 1;
	//While loop where the test is i being greater or equal to 0
	while (i >= 0)
	{
		//Prints the input array from position i
		printf("%c", input[i]);
		//Subtracts 1 from i
		i--;
	}
	//Starts a new line
	printf("\n");

}