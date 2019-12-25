#include"header_files.h"

int main (int argc, char* argv[])	{
	
	int num = atoi(argv[1]);

	for (int i = num ; i >= 0 ; i--)	{

		for (int j = i ; j >= 0 ; j--)	{

			printf("%d\t", j);

		}

		printf("\n");

	}

	return 0;

}
