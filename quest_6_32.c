#include"header_files.h"

int main (void)	{

	int hour, min, sec;
	for (hour = 1 ; hour <= 12 ; hour ++)	{
		system("clear");
		for (min = 1 ; min <= 59 ; min++)	{
			system("clear");
			//gotoxy(2,2);
			//rintf("hh mm ss");
			for (sec = 1 ; sec <= 59 ; sec++)	{
				//system("clear");
				gotoxy(1,1);
				printf("hh mm ss");
				gotoxy(1,2);
				printf("%d:%d:%d", hour, min, sec);
				time_delay(10);
				//system("clear");
			}

		}
	};
	return 0;
}

