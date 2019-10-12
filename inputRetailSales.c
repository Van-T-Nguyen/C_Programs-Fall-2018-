#include <stdio.h> //standard input output
#pragma warning(disable:4996)	// disables warning about scanf (might flag it in the editor, but it's OK)
#define SIZE 13 //constant definition

void inputRetailSales(char * [], float []); //function declartions
void outputRetailSales(char * [], float []); //function declartions

int main(void) //driver function
{
	char * months[SIZE] = {"January", "Feburary", "March", "April", "May", "June", "July",
	"August", "September", "October", "November", "December"}; //initializes the months array of pointers with 12 elements
	float sales[SIZE]; //initializes the sales array
	inputRetailSales(months, sales); //calls inputRetailSales
	outputRetailSales(months, sales); //calls outputRetailSales
	getchar(); //getchar
	getchar(); //getchar
	return 0; //ends program
}

void inputRetailSales(char * months[SIZE], float sales[SIZE]) //function definitions
{
	int i; //initializes i for loop
	
	for(i = 0; i < SIZE - 1; i++) //gets 12 sales, 1 for every month
	{
		printf("Please enter sales for %s: ", *(months + i)); //cycles through months
		scanf("%f", &sales[i]); //adds user input into sales
	}
}

void outputRetailSales(char * months[SIZE], float sales[SIZE]) //function definitions
{
	int i; //initializes i for loop
	printf("\n"); //formatting
	printf("Month:         Sales:\n"); //header
	for(i = 0; i < SIZE-1; i++) //loops through all 12 months and sales
		{
			printf("%-9s $%10.2f\n", *(months+i), sales[i]); //prints months and sales
		}	
}