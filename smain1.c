// smain1.c: small_main1.c
#include <stdio.h>
#include <stdlib.h>

extern char table6[][12];


Date cal_day_add(int year,int month,int day,int offset);

int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int interval_days(Date start,Date end)
{
    int count = 0,year_days = 0,i = 0;
    if (start.day > end.day) count -= (start.day > end.day);
    if (start.day < end.day) count += (end.day - start.day);
    start.day = end.day;

    if (start.month < end.month)
    {
	while (start.month != end.month)
	{
        i = start.month - 1; // i is a month number
	    count += month_day[i];
	    start.month++;
        }
    }

    if (start.month > end.month)
    {
        while (start.month != end.month)
	    {
            i = start.month - 1;
            count -= month_day[i];
            start.month--;
        }
    }

    if (start.year < end.year)
    {
	while (start.year != end.year)
	{
	    year_days = is_leap(start.year + 1) ?366 : 365;
	    count += year_days;
	    start.year++;
        }
    }

    if (start.year > end.year)
    {
	  
        while (start.year != end.year)
        {
            year_days = is_leap(start.year - 1) ? 366 : 365;
            count -= year_days;
            start.year--;
        }
    }
	
    return abs(count);
}

int idays(void)
{
    Date start_date = {0,0,0};Date end_date = {0,0,0};
    printf("Enter the start date(format:YEAR-MONTH-DAY): ");
    scanf("%d-%d-%d",&start_date.year,&start_date.month,&start_date.day);
    printf("Enter the end date(format:YEAR-MONTH-DAY): ");
    scanf("%d-%d-%d",&end_date.year,&end_date.month,&end_date.day);
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
    int days,year;scanf("%d-%d",&year,&days);
    Date u = cal_dayew(2020,days);
    printf("The No.%d day of %d is ",days,year);
    print(&u);
	
    return 0;
}
