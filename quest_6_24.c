#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>

//#define debug

int main (void)	{

	char d,e;
	printf("Enter a Character: ");
	d = getchar();
	e = toupper(d);
#ifdef debug
	printf("%d\n", e);
#endif
	int i;

	for (i = 65 ; i <= 90 ; i++)	{
		if (i == (int) e)	{
			goto stop;
		}
	}
	stop:
	printf("The position of the entered character is %d\n", i-64);
	return 0;

}
