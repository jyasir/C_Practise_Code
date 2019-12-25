#include "header_files.h"

int main(int argc, char* argv[])	{

	int num = atoi(argv[1]);

	for (int i = 0 ; i < num ; i ++)	{

		for (int j = 0 ; j < i+1 ; j++)	{

			printf("*\t");
		
		}

		printf("\n");

	}

	return 0;

}
