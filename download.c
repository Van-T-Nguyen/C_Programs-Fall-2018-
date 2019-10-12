/* 
Program: download.c
Author: Van Nguyen
Date Created: 9/12/2018
Description: This program calculates download time based on  download speed in 
megabits per second (Mbs) and the size of the program in megabytes(MB)
*/

#include <stdio.h>

void download(void);

int main(void)
{
	download();
	getchar();
	getchar();
	return 0;

}

void download(void)
{
	float mbs, mb, speed;
	printf("Please enter the download speed in megabits per second: ");
	scanf("%f", &mbs);
	printf("Please enter the program size in megabytes: ");
	scanf("%f", &mb);
	speed = (mb / (mbs / 8));
	printf("At %.2f megabits per second, a file of %.2f megabytes\n"
	"downloads in %.2f seconds.", mbs, mb, speed);
}
	