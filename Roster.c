#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)	// disables warning about scanf (might flag it in the editor, but it's OK)
#define NAMES 10
#define LENGTH 15
// Commented out the sorting feature that works

void roster(void);

int main(void)
{
	roster();
	getchar();
	getchar();
	return 0;
}

void roster(void)
{
	int count;
	char first[NAMES][LENGTH], last[NAMES][LENGTH], name[NAMES][(LENGTH * 2) + 2], temp[(LENGTH * 2) + 2];
	printf("Please enter your first name (press enter to exit): ");
	for (count = 0; count < NAMES && fgets(first[count], LENGTH, stdin) && first[count][0] != '\n' && first[count][0] != '\0'; count++)
	{
		for (int x = 0; x < LENGTH; x++)
		{
			first[count][x] = tolower(first[count][x]);
			if (first[count][x] == '\n' || first[count][x] == EOF)
			{
				first[count][x] = '\0';
			}
		}
		first[count][0] = toupper(first[count][0]);
		printf("Now, please enter your last name: ");
		fgets(last[count], LENGTH, stdin);
		for (int x = 0; x < LENGTH; x++)
		{
			last[count][x] = tolower(last[count][x]);
			if (last[count][x] == '\n' || last[count][x] == EOF)
			{
				last[count][x] = '\0';
			}
		}
		last[count][0] = toupper(last[count][0]);
		printf("Enter another name, or press enter to exit: ");
	}
	printf("\n");
	for (int i = 0; i < count; i++)
	{
		sprintf(name[i], "%s, %s", last[i], first[i]);
	}
	for (int i = 0; i < count - 1; i++)
	{
		for (int x = i + 1; x < count; x++)
			if (strcmp(name[i], name[x]) > 0)
			{
				/*strcpy(temp, name[i]);
				strcpy(name[i], name[x]);
				strcpy(name[x], temp);*/
				temp = name[i];
				name[i] = name[x];
				name[x] = temp;
			}
	}
	for (int i = 0; i < count; i++)
	{
		printf("%s\n", name[i]);
	}

}