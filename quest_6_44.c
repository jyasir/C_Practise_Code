#include"header_files.h"

int main (int argc, char* argv[])	{
	int num = atoi(argv[1]);
	int p = 34;
	system("clear");
	for (int i = 0 ; i <= num ; i++)	{
		gotoxy(p-i, i+1);
		for (int j = 0 - i ; j <= i ;j++)	{
			printf("%d",abs(j));
		}	
		printf("\n");
	}
	return 0;

}
