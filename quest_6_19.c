#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>

int pwr(int a, int b);

int main(void)	{
	
	system("clear");
	int num;
	printf("Enter a Number:");
	scanf("%d", &num);
	int series_a = 0;
      	int series_b = 0;
	for (int i = 1 ; i <= num ; i ++)	{
	
		series_a += 1/pwr(i, 2);
		series_b += 1/pwr(i, 3);	

	}	

	printf("Results series_a = %d\tseries_b = %d\n", series_a, series_b);

	return 0;		

}

int pwr(int number, int power)	{

	int result = 1;
	for (int i = 1 ; i <= power ; i++)	{
		
		result *= number;
	
	}

	return result;

}
