#include"header_files.h"

int main (void)	{

	int count = 0;
	int x;
	int sum = 0;
	//printf("debug output of 2 exponent 3 is %d\n", power_e(4, 4));
	
	for (int i = 100 ; i <= 999 ; i++)	{
	
		x = i;

		sum = 0;

		for (; x > 0 ;)	{
			
			//printf("Sum :%d\n ", sum);
				
			sum += power_e( (x % 10), 3);

			x = x / 10;

		}

		if (sum == i)	{

			printf("Armstrong Number: %d\n", i);
			count++;
			
		}

	//	printf("Total Armstrong Numbers between 100 and 999 are %d\n", count); 
	}

	printf("Total Armstring Numbers between 100 and 999 are %d\n", count);
	
	return 0;

}
