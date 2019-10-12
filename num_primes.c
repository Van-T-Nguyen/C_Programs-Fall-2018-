/*
Program Name	: LastFirstCFinal2.c
Student			: 
Copyright		: Copyright 2018 Susan M. "Suzy" Oliver at Tulsa, OK
				  Other teachers at TCC are welcome to use this with the copyright
				  still attached. Do NOT give or sell this exam or its answer to 
				  web sites, companies, or any other person or group. You could 
				  lose your credit in this course and be subject to civil action 
				  and/or criminal penalties.
Instructor		: Suzy Oliver
Date			: Fall 2018
Purpose			: Debugging a program for the final exam in C-Language at TCC.
	Description		: This program takes the first MAX_NUMBER_OF_PRIMES that are
					  defined in the array called primes of length MAX_NUMBER_OF_PRIMES
					  and squares each one, putting the result into primes_squared 
					  array, also of length MAX_NUMBER_OF_PRIMES. It then prints out 
					  both arrays. The output should be this, and it MUST be aligned
					  exactly like this:

Primes        :    2    3    5    7   11
Primes Squared:    4    9   25   49  121

*/

// include header files
#include <stdio.h>

// constants
#define MAX_NUMBER_OF_PRIMES 5

// prototypes
int squared(int);
void print_array(int [], int);

int main(void)
{
	int primes[MAX_NUMBER_OF_PRIMES] = { 2, 3, 5, 7, 11 };
	int primes_squared[MAX_NUMBER_OF_PRIMES];

	// generate squares of the the primes and put into primes_squared array
	for (int i = 0; i < MAX_NUMBER_OF_PRIMES; i++)
	{
		primes_squared[i] = squared(primes[i]);
	}

	printf("%-14s:", "Primes");
	print_array(primes, MAX_NUMBER_OF_PRIMES);
	printf("\n");
	printf("%-14s:", "Primes Squared");
	print_array(primes_squared, MAX_NUMBER_OF_PRIMES);

	getchar();
	getchar();
	return 0;
}

int squared(int x)
{
	return x * x;
}

// print_array prints the contents of array called arr of length arr_length onto
// a single line on the console and it ends the line when it is finished.
void print_array(int arr[], int arr_length)
{
	int i;
	for (i = 0; i < arr_length; i++)
	{
		printf("%5d", arr[i]);
	}

}