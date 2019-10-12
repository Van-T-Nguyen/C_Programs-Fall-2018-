#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

static int human = 0, computer = 0;
void twentyNum(void);

int main(void)
{
	twentyNum();
	printf("Do you want to try again (N to quit)?\n");
	while(toupper(getchar()) != 'N')
	{
		twentyNum();
		printf("Do you want to try again (N to quit)?\n");
	}
	getchar();
	getchar();
	return 0;
}

void twentyNum(void)
{
	srand((unsigned)human);
	int num = (rand() % 20 + 1), guess;
	
	printf("Welcome to the guessing game!\n");
	printf("I am thinking of a number between 1 and 20.\n");
	printf("Enter your guess or press 0 to stop: ");
	if ((scanf("%d", &guess)) == 1)
	{	
		while(guess != num && guess != 0)
		{
			if (guess > 0 && guess < 20)
			{
				if (guess < num)
				{
					printf("The number is higher.\n");
				}
				else
				{
					printf("The number is lower.\n");
				}
				printf("Enter your guess or press 0 to stop: \n");
				getchar();
				scanf("%d", &guess);
				continue;
			}
			else
			{
				printf("Please enter something in the 1-20 range.\n");
				scanf("%d", &guess);
				continue;
			}
		}
		if (guess == 0)
		{
			getchar();
			++computer;
			printf("The number was: %d\n.", num);
			printf("The current score is Computer: %d  Human: %d\n", computer, human);
		}
		else
		{
			getchar();
			++human;
			printf("You got it, the number was: %d\n", num);
			printf("The current score is Computer: %d  Human: %d\n", computer, human);
		}
	}
	else
	{
		printf("Please enter a number.\n");
		getchar();
		twentyNum();
	}
}