#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

// function to add the time delay functionality
void time_delay(int);

// main function
int main (void)	{
	system("clear");
	for (;;) {
	for (int i = 0 ; i <= 10 ; i++)	{
		printf("Count: %d\n", i);
		time_delay(1000);
		system("clear");
	}}
	return 0;
}


// function definition
void time_delay(int delay)	{
	
	int milli_sec = 1000 * delay; // converting seconds into milli seconds

	clock_t start_time = clock();

	while (clock() < start_time + milli_sec)	{
	}

	// this function doesnt return anything
}

