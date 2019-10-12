#include <stdio.h>
#define NUM_TESTS 4
#define NUM_STUDENTS 10

double test_avg(const float[][NUM_STUDENTS]);
double student_avg(const float[][NUM_STUDENTS]);

int main(void)
{
	const float grades[NUM_TESTS][NUM_STUDENTS] =
    {
        {65,75,85,95,74,74,98,75,85,65},
        {88,65,75,78,99,88,77,76,98,100},
        {78,65,78,82,93,81,79,97,82,65},
        {68,82,75,65,100,85,77,85,95,85}
    };
	
	test_avg(grades);
	printf("\n");
	student_avg(grades);
	getchar();
	getchar();
	return 0;
}

double test_avg(const float grades[][NUM_STUDENTS])
{
	double sum;
	int test, student;
	printf("TEST         AVERAGE\n");
	for(test = 0; test < NUM_TESTS; test++)
	{
		sum = 0;
		for(student = 0; student < NUM_STUDENTS; student++)
		{
			sum += grades[test][student];
		}
		printf("%4d %15.1f\n", test+1, (sum / NUM_STUDENTS));
	}
}

double student_avg(const float grades[][NUM_STUDENTS])
{
	double sum;
	int test, student;
	printf("STUDENT AVERAGES:\n");
	printf(" STU1 STU2 STU3 STU4 STU5 STU6 STU7 STU8 STU9 STU10\n");
	for(student = 0; student < NUM_STUDENTS; student++)
	{
		sum = 0;
		for(test = 0; test < NUM_TESTS; test++)
		{
			sum += grades[test][student];
		}
		printf("%5.1f", (sum / NUM_TESTS));
	}
}
	