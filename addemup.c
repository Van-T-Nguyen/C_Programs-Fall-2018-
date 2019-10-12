/* 
Program: addemup.c
Author: Van Nguyen
Date Created: 9/18/2018
Description: This program adds up the sum of money based on the amount of days passed
addemup.c -- five kinds of statements
*/

#include <stdio.h>
void addemup(void);

int main(void)
{
	addemup();
	getchar();
	getchar();
	return 0;
}

void addemup(void)                /* finds sum of first 20 integers */
{
    int count, sum, end;           /* declaration statement          */
    
    count = 0;                /* assignment statement           */
    sum = 0;                  /* ditto                          */
	printf("Please enter how long you want the loop to last: ");
	scanf("%d", &end);
    while (count++ < end)      /* while                          */
        sum = sum + count;    /*     statement                  */
    printf("sum = %d\n", sum);/* function statement             */
    
}