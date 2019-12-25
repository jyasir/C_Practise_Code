#include"header_files.h"

int main (void)	{


	long long num;

	printf("Enter Four Digit Binary Number: ");
	
	scanf("%lld", &num);

	int count = 0;

	int rem;

	while (num != 0)	{
		rem = num % 10;
		if (rem == 1) { count++;}
		num = num / 10;
	}

	if (count % 2 == 0)	{
		printf("Parity Bit is 0\n");
	}

	else {
		printf("Parity Bit is 1\n");
	}

	return 0;


}
