/* 
Program: paycheck.c
Author: Van Nguyen
Date Created: 10/3/2018
Description: This program prints gross and net pay and tax based on the amount of hours worked.
*/

#include <stdio.h>
#pragma disable(warning:4996)
#define RATE1 .15
#define RATE2 .20
#define RATE3 .25
#define CUTOFF1 300.0
#define CUTOFF2 450.0
#define BASE1 (RATE1 * CUTOFF1)
#define BASE2 (BASE1 + (RATE2 * (CUTOFF2 - CUTOFF1)))

void paycheck(void);

int main(void)
{
	paycheck();
	getchar();
	getchar();
	return 0;
}

void paycheck(void)
{
	float pay, tax, hrs;
	printf("Please enter the amount of hours worked (Enter 0 to exit): ");
	scanf("%f", &hrs);
	while (hrs != 0)
	{
		if (hrs <= 40)
		{
			pay = (10.0 * hrs);
		}
		else
		{
			pay = ((10.0 * 40) + (10.0 *(hrs - 40) * 1.5));
		}
		
		if (pay <= 300)
		{
			tax = pay * RATE1;
		}
		else if (pay <= 450)
		{
			tax = BASE1 + ((pay - CUTOFF1) * RATE2);
		}
		else
		{
			tax = BASE2 + ((pay - CUTOFF2) * RATE3);
		}
		
		printf("Gross pay: $%.2f\n", pay);
		printf("Taxes    : $%.2f\n", tax);
		printf("Net pay  : $%.2f\n", (pay - tax));
		
		printf("Please enter the amount of hours worked: ");
		scanf("%f", &hrs);
	}
	printf("See you later!");
}