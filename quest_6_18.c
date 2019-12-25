#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main (void)	{
	system("clear");
	int a, b, c, d, e;
	int sum = 0;
	printf("Enter 5 Digits: ");
	scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
	sum = a + b + c + d + e;

//	for (int i = sum ; i <= sum ; i --)	{
	for (int i = 0 ; i <= sum ; i++ )	{
		if (i == a || i == b || i == c || i == d || i == e)
		{
			// printf greatest number
			printf("\nThe lowest number is %d \n", i);
		        exit(0);	
		}

	}

	return 0;

}
