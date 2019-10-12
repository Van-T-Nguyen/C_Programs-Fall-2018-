/*
 * Program Name  : Homework Menu System
 * Chapter       : Chapter 09
 * Author        : Van Nguyen
 * Date Created  : 10/22/2018
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
int min_driver(void);
int chline_driver(void);
int sort_driver(void);

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
			getchar();
			min_driver();  // remove this line and replace with a call to your own function
			break;

		case 2:
			getchar();
			chline_driver();
			break;

		case 3:
			getchar();
			sort_driver();
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
	printf(" 1. Min \n");
	printf(" 2. Character Line\n");			// put brief names of your programs/functions here
	printf(" 3. Sort\n");
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
 * Program/Function Name: min.c
 * Chapter              : Chapter 9
 * Author               : Van Nguyen
 * Date Created         : 10/22/2018
 * Purpose              : This program takes two integers and returns the smaller of them.
 * Description          : This program takes two integers and returns the smaller of them.
 */

double min(double, double);

int min_driver(void)
{
	double x, y;
	printf("Please enter two numbers to be compared (Press Q to quit): ");
	while(scanf("%lf %lf", &x, &y) == 2)
	{
		printf("Between %.2lf and %.2lf, %.2lf is smaller.\n", x, y, min(x, y));	
		printf("Please enter two numbers to be compared (Press Q to quit): ");
	}
	getchar();
	getchar();
	return 0;
}

double min(double x, double y)
{
	return (x < y) ? x : y;
}

/*
 * Program/Function Name: chline.c
 * Chapter              : Chapter 9
 * Author               : Van Nguyen
 * Date Created         : 10/12/2018
 * Purpose              : This program takes a character and two numbers and prints the character in the columns with
 the number designated by the user.
 * Description          : This program takes a character and two numbers and prints the character in the columns with
 the number designated by the user.
 */

void chline(char, int, int);

int chline_driver(void)
{
	char ch;
	int x, y;
	printf("This program takes a character from the user and two numbers and then prints the character in columns from\n");
	printf("that the first to second number with spaces filling out the non specified columns.\n");
	printf("Please enter a character followed by two numbers: ");
	ch = getchar();
	scanf("%d %d", &x, &y);
	chline(ch, x, y);
	getchar();
	getchar();
	return 0;
}

void chline(char ch, int x, int y)
{
	int column;
	int distance;
	if (x != 1)
	{
		distance = x - 1;
		for (column = 1; column <= y + distance; column++)
		{
			printf("%d ", column);
		}
		printf("\n");
		for (column = 1; column <= y + distance; column++)
		{
			if (column < x || column > y)
			{
				printf("  ");
			}
			else	
			{
				if(column < 10)
				{
					printf("%c ", ch);
				}
				else
				{
					printf("%c  ", ch);
				}
			}
		}
	}
	else
	{
		for (column = 1; column <= y; column++)
		{
			printf("%d ", column);
		}
		printf("\n");
		for (column = 1; column <= y; column++)
		{
			printf("%c ", ch);
		}
	}
}
	

/*
 * Program/Function Name: sort.c
 * Chapter              : Chapter 9
 * Author               : Van Nguyen
 * Date Created         : 10/12/2018
 * Purpose              : This program takes 3 number from the user and arranges them from least to greatest.
 * Description          : This program takes 3 number from the user and arranges them from least to greatest.
 */

#include <stdio.h>

void sort(double * x, double * y, double * z);

int sort_driver(void)
{
	double x, y, z;
	printf("Please enter 3 numbers whose values will be rearraged from smallest to largest or press Q to quit: ");
	while (scanf("%lf %lf %lf", &x, &y, &z) == 3)
	{
		printf("X is %.2lf, Y is %.2lf, and Z is %.2lf\n", x, y, z);
		sort(&x, &y, &z);
		printf("Now X is %.2lf, Y is %.2lf, and Z is %.2lf\n", x, y, z);
		printf("Please enter 3 numbers whose values will be rearraged from smallest to largest or press Q to quit: ");
	}
	getchar();
	getchar();
	return 0;
}

void sort(double * x, double * y, double * z)
{
	double temp;
	if (*x > *y || *x > *z)
	{
		if (*x > *y)
		{
			temp = *x;
			*x = *y;
			*y = temp;
		}
		else if (*x > *z)
		{
			temp = *x;
			*x = *z;
			*z = temp;
		}
	}
	if (*y > *z)
	{
		temp = *y;
		*y = *z;
		*z = temp;
	}
}