#include"header_files.h"

int main(void)	{

	int num;
	printf("enter number: ");
	scanf("%d", &num);
	int result;
	int temp = 0;
	while(num != 0)	{
		temp += num%10;
		num = num / 10;
		if (temp > 9 && num == 0)	{
		
			printf("The resuls is %d\n", temp);
			num = temp;
			temp = 0;

		}
	}

	printf("Result: %d", temp);
	return 0;

}
