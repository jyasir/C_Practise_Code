#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
#include<time.h>

#define debug

int pow_base_man(int, int);

int main (void)			{

	int a, b, result;
	printf("Enter Base and Power: ");
	scanf("%d %d", &a, &b);
	result = pow_base_man(a, b);
	printf("Result: %d\n", result);
	return 0;

}

int pow_base_man(int base, int power)	{

	int result = 1;

	for (int i = 1 ; i <= power ; i++)	{
	
		result *= base;

	}

	return result;
}
