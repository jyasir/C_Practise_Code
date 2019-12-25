#include"header_files.h"

void convert_binary(long long num);

int main (void)	{

	long long binary_num;
	printf("Enter Binary Number: ");
	scanf("%lld", &binary_num);
	convert_binary(binary_num);
	return 0;

}

void convert_binary(long long num)	{

	int dec = 0, i = 0, rem;

	while (num != 0)	{

		rem = num % 10;

		num = num / 10;

		dec += rem * (power_e(2, i));

		i++;

	}

	printf("The conversion of binary %lld to decimal is %d\n", num, dec);

	
}
