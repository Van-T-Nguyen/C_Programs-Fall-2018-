#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count_char(FILE *, int *, int *);
int countchar(FILE *);

int main(void)
{
	char file[50];
	FILE * fp;
	int line, word;
	line = 0;
	word = 0;
	int * lp = &line;
	int * wp = &word;
	printf("Please enter the file name you want to open here: ");
	scanf("%s", file);
	fp = fopen(file, "r");
	if (fp == NULL)
    {
        printf("Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
	printf("%s has %d characters counting spaces.\n", file, count_char(fp, lp, wp));
	fseek(fp, 0, SEEK_SET);
	printf("%s has %d characters not counting spaces.\n", file, countchar(fp));
	printf("%s has %d lines and %d words\n", file, line, word);
	fclose(fp);
	getchar();
	getchar();
	return 0;
}

int count_char(FILE * fp, int * lp, int * wp)
{
	int ch, character, test;
	character = 0;
	test;
	while ((ch = getc(fp)) != EOF)
	{
		if (ch != '\t' && ch != '\r' && ch != '\b' && ch != '\f' && ch != '\v')
		{
			character++;
		}
		if (isalpha(ch))
		{
				test = 1;
		}
		if (test)
		{
			if (isspace(ch))
			{
				(*wp)++;
				test = 0;
			}
		}
		if (ch == '\n')
		{
			(*lp)++;
		}
	}
	return character;
}
		
int countchar(FILE * fp)
{
	int ch, character;
	character = 0;
	while ((ch = getc(fp)) != EOF)
	{
		if (isspace(ch) == 0)
		{
			character++;
		}
	}
	return character;
}

