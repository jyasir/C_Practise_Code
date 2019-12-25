#include<stdio.h>
#include<stdlib.h>

int main (void)	{
	system("clear");
	int a, b, c, d, e;
	int sum = 0;
	printf("Enter Mark of 5 Subjects: ");
	for (int i = 0 ; i < 5 ; i++)	{

		printf("\nMark [%d] ", i);
		if (scanf("%d %d %d %d %d", &a , &b, &c, &d, &e) == 5) {

			sum = a + b + c + d + e;
		}

	}
	system("clear");
	printf("Average of the Marks %d\n", sum/5);
	return 0;
}
