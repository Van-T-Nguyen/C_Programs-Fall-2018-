/* 
Program: conversion.c
Author: Van Nguyen
Date Created: 9/10/2018
Description:This program takes user input of volume in cups and converts them into 
pints, ounces, tablespoons, and teaspoons.
Answer: A floating point makes more sense than an int for the values as there's no guarantee 
that the user will use a whole number amount of cups.
*/

#include <stdio.h>

void convert(void);

int main(void)
{
	convert();
	getchar();
	getchar();
	return 0;
	
	
}

void convert(void)
{
	float cups, pints, ounces, tablespoons, teaspoons; // Initialization
	printf("This program takes the amount of cups used and converts it to pints, ounces, tablespoons, and teaspoons.\n");
	printf("Please enter the amount of cups used: ");
	scanf("%f", &cups); // Takes user input
	printf("Cups entered is %.2f.\n", cups);
	// Conversion work
	pints = (cups / 2);
	printf("Pint amount is %.2f.\n", pints);
	ounces = (cups * 8);
	printf("Ounce amount is %.2f.\n", ounces);
	tablespoons = (ounces * 2);
	printf("Tablespoon amount is %.2f.\n", tablespoons);
	teaspoons = (tablespoons * 3);
	printf("Teaspoon amount is %.2f.\n", teaspoons);
}
	
	
	