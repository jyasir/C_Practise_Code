#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
//#include<dos.h>
#include<assert.h>

#define debugging

void gotoxy(int x, int y) {

	printf("\033[%d;%dH", (y), (x));
//	printf("\033[%dX", x);
//	printf("\033[%dB", y);

}

void time_delay(int x)	{

	int micro_second = 1000 * x;

	clock_t micro_time = clock();

	while ( clock() < micro_second + micro_time)	{
		;
	}

}	

int power_e (int base, int power)	{

	int result = 1;

	for (int i = 1 ; i <= power ; i++)	{
		result *= base;
	}
	
	return result;

}
