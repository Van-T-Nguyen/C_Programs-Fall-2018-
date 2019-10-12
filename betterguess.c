/* 
Program: betterguess.c
Author: Van Nguyen
Date Created: 10/12/2018
Description: This program is an improved version of the guess program from the book
*/

#include <stdio.h>   
#include <ctype.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void betterguess(void);

int main(void)
{
	betterguess();
	getchar();
	getchar();
	return 0;
}

void betterguess(void)
{
    int guess = 50;
	int high = 0;
	int low = 100;
	int old;
	int round = 0;
    char response;
    
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\n'h' or 'l' if it is too high or too low respectively.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')     /* get response */
    {
        if (tolower(response) == 'l')
		{
			old = guess;
			guess = guess + ((low - old) / 2);
			if (guess != 99)
			{
				printf("Well, then, is it %d?\n", guess);
			}
			else
			{
				if (round == 0)
				{
					printf("Well, then, is it %d?\n", guess);
					round++;
				}
				else
				{
					guess += 1;
					printf("Well, then, is it %d?\n", guess);
				}
			}
			high = old;
		}
        else if (tolower(response) == 'h')
		{
			old = guess;
			if (high > old)
			{
			guess = guess - ((high - old) / 2);
			}
			else
			{
				guess = guess - ((old - high) / 2);
			}
            printf("Well, then, is it %d?\n", guess);
			low = old;
		}
		else
		{
            printf("Sorry, please enter only 'y', 'low', or 'high'\n");
			while (getchar() != '\n') // Flushes input from the loop
			{
				continue;                 /* skip rest of input line */
			}
			continue;
		}
        while (getchar() != '\n')
		{
            continue;                 /* skip rest of input line */
		}
    }
	while (getchar() != '\n') // Flushes input from the loop
	{
           continue;                 /* skip rest of input line */
	}
    printf("I knew I could do it!\n");
	printf("Do you want to try again? (y or n)\n");
	while ((response = getchar()) != 'n') // Gives the user a chance to either redo or kill the program
	{
		if (tolower(response) == 'y')
		{
			while (getchar() != '\n')	  // Flushes out input from prior loops
			{
				continue;                 /* skip rest of input line */
			}
			betterguess();
		}
		else
		{
			printf("Sorry, please enter only 'y' or 'n'\n");
			while (getchar() != '\n') // Flushes input from the loop
			{
				continue;                 /* skip rest of input line */
			}
			continue;
		}
		while (getchar() != '\n')
		{
            continue;                 /* skip rest of input line */
		}
	}
	exit(0);
}