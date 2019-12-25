#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(int argc, char* argv[])	{
	system("clear");
	//int num = 5;
	assert(argc == 2);
	int num = atoi(argv[1]);
	int bench = num;
	for (int i = num ; i >= 0 ; i--)	{
		printf("%d\t%d\n", i, bench);
		bench++;
	}
	return 0;

}
