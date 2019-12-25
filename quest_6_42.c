#include"header_files.h"

int main (int argc, char* argv[])	{

	int num = atoi(argv[1]);

	// first two for loops
	
	for (int i = 1 ; i <= num ; i ++)	{

		for (int j = 1 ; j <= i ; j++)	{
		
			printf("%d\t", j);

		}

		printf("\n");

	}

	//printf("\n");

	// second two for loops
	
	for (int x = num ; x >= 1 ; x--)	{

		for (int y = x ; y >= 1 ; y--)	{
			
			printf("%d\t", y);

		}

		printf("\n");

	}

	return 0;

}
