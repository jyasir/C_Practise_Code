#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main (void)	{
	int frst_num, scnd_num, d = 0;

	printf("Enter Two Numbers: ");

	scanf("%d %d", &frst_num, &scnd_num);

	for (int i = 1 ; i <= scnd_num ; i++)	{
	
		d = d  - (- frst_num);
	
	}

	printf("Result is %d", d);

	return 0;

}
