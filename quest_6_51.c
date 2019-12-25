// creating a program to find the hamming code of a given databits
//
#include"header_files.h"

#define mask(x) ((int) (1 << x))  // this definition is created for shifting bits in the program

int main (void)	{

// create a variable size array that changes depending on the number of bits

// calculation of the hamming code length

	int msg_bits; // number of data bits;

	printf("Enter Total Number of Bits: ");

	scanf("%d", &msg_bits);

	int *ptr_array;	// creating a pointer for dynamic memory allocation

	ptr_array = (int*)malloc(msg_bits * sizeof(int));

	for (int i = 0 ; i < msg_bits ; i++)	{ // provide LSB first 

		printf("Enter Data (0 or 1) on Bit Position %d : ", i);

		scanf("%d", &ptr_array[i]);

	}	

	#ifdef debugging

	// Print the data bits
	
	for (int j = 0 ; j < msg_bits ; j++)	{
	
		printf("%d", ptr_array[j]);

	}

	#endif

	// calculate the length of hamming code
	
	int code_length;
	
	int red_bit = 0;
	
	// given is n which is the data field
	
	// 2^r >= r + n + 1 or 2^r - r >= m + 1
	
	while ( power_e(2, red_bit) < red_bit + msg_bits + 1)	{
		red_bit++;
	}

	code_length = red_bit + msg_bits;

	printf("\nHamming Code Length %d\n", code_length);

	int* ptr_array_2;

	ptr_array_2 = (int*) malloc(code_length * sizeof(int));
;

	int k = 0; // to calculate the position for redundant bit
	
	int j = 0; // to calculate the position for message or data bits

	for (int x = 1 ; x <= code_length ; x ++)	{

		if (x == power_e(2, k))	{
		
			ptr_array_2[x] = 8;
			k++;

		}

		else 	{

			ptr_array_2[x] = ptr_array[j];
			j++;

		}

	}

	// print the message before calculation of redundant bits
	//
	for (int s = 1 ; s <= code_length ; s++)	{

		printf("%d ", ptr_array_2[s]);

	}

	printf("\n");

	// to calculate rbit values 

	int bit_position = 0;

	for (int j = 1 ; j <= code_length ; j++)	{

		if (ptr_array_2[j] == 8)	{

		ptr_array_2[j] = 0;
		//int bit_position = 0;
		int result = 0;
		
		for (int m = 1 ; m <= code_length ; m++)	{
		
			if ((ptr_array_2[m] != 8) && (m & mask(bit_position)))	{
				result ^= ptr_array_2[m];
			}

		}		
		
		ptr_array_2[j] = result;
		
		bit_position++;

		}		

	}	
	
	printf("\n hamming code after calculation of redundant parity bits \n");
	
	for (int d = 1 ; d<= code_length ; d++)	{
		
		printf("%d ", ptr_array_2[d]);

	}

	// testing the masking function
	//
		
	//printf("mask 1 & 2 %d \n", mask(1) & 2);
	//printf("mask 1 & 1 %d \n", mask(1) & 1);
	//printf("mask 2 & 4 %d \n", mask(2) & 4);
	//printf("mask 0 & 9 %d \n", mask(0) & 9);	

	free(ptr_array);

	free(ptr_array_2);

	return 0; // the main function call 
}
