/*
 * Program Name  : Homework Menu System
 * Chapter       : Chapter 08 
 * Author        : Van Nguyen
 * Date Created  : 10/12/2018
 * Purpose       : Menu driver for practice C programming files
 * Description   : This program is a collection of the programs worked on in class
 *
 * You will use this file and attach your c programs to the bottom of this file, 
 * but they will now be functions instead of stand-alone programs.
 * This file has Hello World included as an example.
 * 
 * Using a menu driver has two purposes, first to give you experience using menu drivers, 
 * second to facilitate the ease of grading multiple program assignments.
 *
 * Steps to add a program/function:
 * 1. Move to the very bottom of this file.
 * 2. Write the code for your new function (remember not to use main as its name because there can only be one main).
 * 3. Go to the top and add the prototype definition above main().
 * 4. Add a case block to run the function.
 * 5. Add a menu option.
 * 6. Run the program.
 * 7. Debug and test as needed.
 * 8. Repeat for each of your other program assignments in this chapter.
 *
 * Notes        :
 *
 * Each C program must have one - and ONLY one - main() function.
 * The main() function serves as the starting point.
 *
 * Yes! You should turn in only ONE .c file even if there are multiple programs 
 * required for the chapter!
 *
 * Remember to change the name of the file to use your own name and replace NN 
 * with the chapter number (use a leading 0 for chapters 1-9).
 */

// preprocessor statements
#include <stdio.h>   //header file for input/output
#include <ctype.h>
#include <stdlib.h>
#pragma warning(disable:4996)	// disables warning about scanf (might flag it in the editor, but it's OK)

 // function prototype definitions

int menu(void);
void count_ch(void); 
void chartype(void);
void betterguess(void);
// main function

int main(void)
{
	// variable declaration and initialization via call to menu()
	// This also serves as the 'priming' read for the following while loop
	int selection = menu();  

	while (selection != 99) {
		// make a couple of blank lines on the screen to separate your program output from the menu
		printf("\n\n");

		// The switch statement is similar to a chained if-else except conditions fall through in C!
		switch (selection) {

		case 1:
			count_ch();  // remove this line and replace with a call to your own function
			break;

		case 2:
			chartype();
			break;

		case 3:
			betterguess();
			break;

		default:
			printf("Please enter a valid selection.\n");
		}

		// make a couple of blank lines on the screen to separate your program output from the next menu
		printf("\n\n");

		// get the next menu selection, otherwise, you have an infinite loop!
		selection = menu();    
	}

	return 0;
}

int menu(void)
{
	// declare variables
	int choice;

	// print the menu
	printf(" 1. Count Char \n");
	printf(" 2. Char Type\n");			// put brief names of your programs/functions here
	printf(" 3. Better guess\n");
	printf("99. Exit\n\n");

	// get input from user
	printf("Please select number and press enter: ");
	scanf("%d", &choice);

	return choice;
}

// Put your first program here instead of this one. Put the others after this.

/*
 * Program/Function Name: first.c
 * Chapter              : Chapter 2
 * Author               : Your Name
 * Date Created         : Today's Date
 * Purpose              : One-line description
 * Description          : Detailed description (usually 3-10 lines)
 */

// NOTE: Since everything is in one file, you do not need to include <stdio.h> again so comment it out.
// I would not delete it entirely in case you want to change it to a stand-alone program again.
//#include <stdio.h>

/*
 * Program/Function Name: count_ch.c
 * Chapter              : Chapter 9
 * Author               : Van Nguyen
 * Date Created         : 10/12/2018
 * Purpose              : This program counts the number of characters until the user ends input
 * Description          : This program counts the number of characters the user has typed in.
 */

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

/*
 * Program/Function Name: chartype.c
 * Chapter              : Chapter 9
 * Author               : Van Nguyen
 * Date Created         : 10/12/2018
 * Purpose              : This program counts the number of different types of characters until the user ends input
 * Description          : This program counts the number of upper, lower, and other case words based on characters
 the user has typed in.
 */

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

/*
 * Program/Function Name: betterguess.c
 * Chapter              : Chapter 9
 * Author               : Van Nguyen
 * Date Created         : 10/12/2018
 * Purpose              : This program is an improved version of the guess program from the book
 * Description          : This program guesses the midway point between its current guess and a higher or lower number
 depending on user input, includes a reset function.
 */

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