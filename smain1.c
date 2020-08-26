// smain1.c: small_main1.c
#include <stdio.h>
#include <stdlib.h>

extern char table6[][12];


Date cal_day_add(int year,int month,int day,int offset);

int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int interval_days(int start[],int end[])
{
    int count = 0,year_days = 0,i = 0;
	if (start[2] > end[2]) count -= (start[2] > end[2]);
	if (start[2] < end[2]) count += (end[2] - start[2]);
	start[2] = end[2];

	if (start[1] < end[1])
	{
		while (start[1] != end[1])
		{
		    i = start[1] - 1; // i is a month number
			count += month_day[i];
			start[1]++;
	        }
	}

	if (start[1] > end[1])
	{
	    while (start[1] != end[1])
		{
		    i = start[1] - 1;
			count -= month_day[i];
			start[1]--;
		}
	}

	if (start[0] < end[0])
	{
		while (start[0] != end[0])
		{
		    year_days = is_leap(start[0] + 1) ?366 : 365;
			count += year_days;
			start[0]++;
		}
	}

	if (start[0] > end[0])
	{
	    while (start[0] != end[0])
		{
		    year_days = is_leap(start[0] - 1) ? 366 : 365;
			count -= year_days;
			start[0]--;
		}
	}
	
	return abs(count);
}

int idays(void)
{
    int start_date[3] = {0,0,0};int end_date[3] = {0,0,0};
	printf("Enter the start date(format:YEAR-MONTH-DAY): ");
	scanf("%d-%d-%d",&start_date[0],&start_date[1],&start_date[2]);
	printf("Enter the end date(format:YEAR-MONTH-DAY): ");
    scanf("%d-%d-%d",&end_date[0],&end_date[1],&end_date[2]);
	printf("The two dates are %d days apart \n",interval_days(start_date,end_date));

	return 0;
}

Date cal_dayew(int year,int day) // Calculate the day of the year on which date
{
	return cal_day_add(year - 1,12,31,day);
}

int dayew(void) 
{
	printf("Enter year and day(format:YEAR-DAY): ");
	int days,year;scanf("%d %d",&year,&days);
	Date u = cal_sday(2020,days);
	printf("The No.%d day of %d is ",days,year);
    print(&u);
	
	return 0;
}
