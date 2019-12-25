#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
int main (void)	{
	int count;
	int counter = 1;
	const int alpha = 122;
	printf("%c%c ", 65,alpha);
	for (count = 98 ; count <= alpha ; count++)	{
		printf("%c%c ", count,(122 - counter));
		counter++;
	}
	printf("\n");
	clock_t tim = clock();
	printf("time is %f\n", tim);
	return 0;
}
