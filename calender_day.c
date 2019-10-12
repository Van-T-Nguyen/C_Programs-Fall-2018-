// header files
#include <stdio.h>
#include <stdbool.h>

// prototypes
bool is_leap_year(int year);

// constants
#define MONTHS 12
#define MIN_YEAR 1901
#define MAX_YEAR 2099
const int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int main(void)
{
	int month, day_of_month, year, day_of_year;
	
	printf("This program will calculate the day number within the year of a given date.\n");
	printf("For example, January 1 of any year would be the 1st day of the year.\n");
	printf("March 1 of a non-leap year would be 31 + 28 + 1 = 60th day of the year.\n");
	printf("March 1 of a leap year (divisible by 4) would be 31 + 29 + 1 = 61st day of the year.\n\n");
	printf("\nPlease enter the date you wish to check. (Enter 0 for year to exit)\n");
	
	// get the year input
	printf("Year (%d-%d): ", MIN_YEAR, MAX_YEAR);
	scanf("%d", &year);
	while (year != 0)
	{
		// get the month input
		printf("Month number (1-12): ");
		scanf("%d", &month);
	
		// get the day of the month input
		if (is_leap_year(year))
		{
			if (month == 2)
			{
				printf("Day of month (1-%d):", (days[1] + 1));
				scanf("%d", &day_of_month);
			}
			else
			{
				printf("Day of month (1-%d): ", days[month - 1]);
				scanf("%d", &day_of_month);
			}
		}
		else
		{
			printf("Day of month (1-%d): ", days[month - 1]);
			scanf("%d", &day_of_month);
		}
		// FIXME: This tells the user to enter 1-# days in the month, but if the month
		// happens to be February and it happens to be a leap year, you need to do 29 instead of 28.
	
		
		day_of_year = 0;
	
		/*printf("Day of month (1-%d): ", days[month - 1]);
		scanf("%d", &day_of_month);*/
	
		// calculcate the day of the year
		
		for (int i = 0; i < month - 1; i++)
		{
			day_of_year += days[i];
		}
		if (is_leap_year(year))
		{
			if (month > 2)
			{
				day_of_year += day_of_month + 1;
			}
			else
			{
				day_of_year += day_of_month;
			}
		}
		else
		{
			day_of_year += day_of_month;
		}
	
		// FIXME: add up all the days in the months before the user's month to day_of_year.
		// Remember that month for the user, which starts at 1, is one higher than the array subscripts which start at 0.
	
	
	
	
	
		// FIXME: if year is a leap year and the month is after February, you'll need to add one to day_of_year.
	
	
	
		printf("\n%d/%d/%d is day %d of the year.\n", month, day_of_month, year, day_of_year);
		printf("\nPlease enter the date you wish to check. (Enter 0 for year to exit)\n");
	
		// get the year input
		printf("Year (%d-%d): ", MIN_YEAR, MAX_YEAR);
		scanf("%d", &year);
	}
	
	getchar();
	getchar();
	return 0;
}

// this function returns 1 or true if year is evenly divisible by 4 and 0 or false if not. 

bool is_leap_year(int year)
{
// FIXME: Write the contents of this function. return true if year is evenly divisible by 4 and false otherwise.
// The problem of dealing with years that are divisible by 100 is avoided since we are limiting the years to 1901-2099.
// Note that 2000 was a leap year even though it is divisible by 100 because it is also divisible by 400.
// All you need to worry about is whether the year is divisible by 4.
	bool x;
	if ((year % 4) == 0)
	{
		x = true;
	}
	else
	{
		x = false;
	}
	return x;
}