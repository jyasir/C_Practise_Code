#include "header_files.h"

int main(void) {
	
	int x, y, a, b, c = 0, j = 12, k = 2;
	// b printing bits
	// c for parity
	system("clear");
	printf("   Binary Bits	    Parity Bits	\n");
	printf("========================================");

	for (x = 0 ; x < 8 ; x++)	{

		k++;	// increment the row value for positioning the cursor
		j = 12; // column value for positioning the cursor
		y = x;

		for (a = 0 ; a < 3 ; a++)	{
			
			b = y % 2;
			gotoxy(j-=3, k);
			printf("%d", b);	
			y = y / 2;
			if (b == 1){
				c++;
			}

		}

		if (c % 2 == 0)	{
			gotoxy(25, k);
			printf("%d", 1);
		}
		else {
			gotoxy(25, k);
			printf("%d", 0);
		}
		c = 0;

	}

	return 0;

}
