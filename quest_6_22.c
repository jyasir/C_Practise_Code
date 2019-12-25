#include<stdio.h>

int main (void)	{

	int a, b, c = 1, s = 0;
	printf("Enter two numbers" );
	scanf("%d %d", &a, &b);
	for (;;)	{
		
		s = s + a;
		if (c == b)	{
			goto stop;
		}
		c++;
	}
stop:
	printf("The multiplication of two numbers: %d\n",s); 
	return 0;
}
