#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main (void)	{
	system("clear");
	int a, b, c, d, e;
	int sum = 0;
	printf("Enter 5 Numbers: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	sum = a + b + c + d + e;
	system("clear");
	//for (int i = 1 ; i <= sum ; i++)	{
	for (int i = sum ; i <= sum ; i--)     {
		//printf("\nDescencding Numbers\n");
		if (i == a || i == b || i ==  c || i == d || i == e)	printf("%d\n", i);

	}
	return 0;

}

