// file name: chtime.c, chtime: Chinese time
#include <stdio.h>

extern char table4[][12];

int cal_zodiac(int year)  // Calculate the zodiac number of a year and return it
{
	int one = year % 12;
	switch (one)
	{
		case 1:return 9;
		case 2:return 10;
		case 3:return 11;
		case 4:return 0;
		case 5:return 1;
		case 6:return 3;
		case 7:return 2;
		case 8:return 4;
		case 9:return 5;
		case 10:return 6;
		case 11:return 7;
		case 12:return 8;
	}

	return 0;	
} 

int zodiac(void)  
{
	int year;printf("Enter the year: ");scanf("%d",&year);
	printf("the zodiac in %d year is '%s' \n",year,table4[cal_zodiac(year)]); 

	return 0;
}
