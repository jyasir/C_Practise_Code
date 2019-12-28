// Program to display the days of each month
#include"header_files.h"
#define MAX_STRING_SIZE 10

int main (void)	{

	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char months[12][MAX_STRING_SIZE] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

	for (int i = 0 ; i < 12 ; i ++)	{
	
		printf("%s - %d \n", months[i], days[i]);

	}

	return 0;
}


