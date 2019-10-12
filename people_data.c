/*
 * Program Name  : NguyenVanExam1
 * Chapter       : Exam 
 * Author        : Van Nguyen
 * Date Created  : 10/17/2018
 * Purpose       : Function and array practice
 * Description   : This program scans in a user's name and age and using a function returns the age plus 10 years.
 It then prints out the contents of an array.
 */
 
#include <stdio.h>
#pragma warning(disable:4996)

// create a function called plus10 that accepts a person's age
// and returns their age 10 years from now. Do NOT use a 
// decimal point, so use the appropriate types for this.

int plus10(int);

int main(void)
{
	int nums[] = { 5, 10, 15, 20 };
	size_t nums_length = sizeof(nums) / sizeof(nums[0]);
	char name[10];
	int age, i;
	
			
	
	printf("Hello, what is your first name?\n");
	scanf("%s", name);
	// ask the user for their first name and read it. put it 

	printf("How old are you?\n");
	scanf("%d", &age);

	// ask the user for their age in years (no decimal points)
	// and put that into the appropriate variable type

	printf("Hi, %s. You are %d years old.\n", name, age);

	// print the sentence that give the user's name and age in this format:
	// Hi, Allie. You are 5 years old.

	printf("In ten years, you will be %d years old.\n\n", plus10(age));

	// print the sentence that give the user's age 10 years
	// from now. Calculate that by calling the function plus10
	// that you are writing.
	// Use this format:
	// In 10 years, you will be 15 years old.
	
	for(i = 0; i < nums_length; i++)
	{
		printf("%d ", nums[i]);
	}

	// skip a line between the previous output and the next.
	// print the values of the array, separated by a space.
		
		printf("\n\nBye!");


	// skip a line and print Bye



	getchar();
	getchar();

	return 0;
}

int plus10(int age)
{
	int future;
	future = age + 10;
	return future;
}
	