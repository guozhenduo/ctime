/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Author: SuChenguo                                          *
* Maintainer: SuChenguo                                      *
* Create time: 2020 Aug 06 11:23                             *
* Update time: 2020 Aug 24 10:44                             *
* VERSION: 0.2                                               *
* LINCENSE: MIT License                                      *
* More ways to use it are waiting for you to find out        *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  */

//smain.c: small_main.c

/* include block */
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"

#define or ||

/* define global block */
int table[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; // days are there in a month
char table2[][7] = {"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};  // Abbreviation of week
char table3[][12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
char table5[][12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};  //Abbreviation of month
char table4[][12] = {"鼠","牛","虎","兔","龙","蛇","马","羊","猴","鸡","狗","猪"};
char table6[][12] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};

/* code define block */

int dafy(void);
int fday(void);
int mday(void);
int zodiac(void);
int bf(void);
int idays(void);
int choice(void);
int dayew(void);
int func(void);

int is_leap(int year)
{
    return year % 4 == 0 ? 1 : 0; // if  +year % 4 == 0 return value is 1 else 0
}

int month_days(int the_year,int the_month)
{
    if (1 or 3 or 5 or 7 or 8 or 10 or 12) return 31;
    if (4 or 6 or 9 or 11) return 30;

    if (the_year % 4 == 0 && the_month == 2) return 29;
    else return 28;

    return 0;
}

Date cal_day_add(int year,int month,int day,int offset) // Calculate the days after a day in a year
{
    int month_day = month_days(year,month);
    day += offset;
    if ((day - month_day) <= 0) { ; }
	
    while (day > month_day)
    {
       month++;
       if (month > 12) year++,month = 1;
       day -= month_days(year,month - 1);
    }

    Date res = {year,month,day};

    return res;
}

int day_add(void)  // Corresponding to 1
{ 
    printf("Enter the year(format: YEAR-MONTH-DAY): ");
    int year = 0,month = 0,day = 0;
    scanf("%d-%d-%d",&year,&month,&day);
    int off = 0;  // off isn't office,off is offset
	
    printf("Enter the offset: ");
    scanf("%d",&off);

    Date results = cal_day_add(year,month,day,off);
    printf("%d-%d-%d in two days,it's ",year,month,day);
    print(&results);

    return 0;
}

int cal_wdw(int year,int month,int day) // which days of the weeks
{
    int c = ((year / 1000 % 10) * 10  + ((year / 100 % 10) * 100));
    if (month == 1 || month == 2)  month += 12,year--;
	
    int y = ((year / 10 % 10) * 10) + year % 10,m = month,d = day;
    int result = ((int)(y + floor(y / 4) + floor(c / 4) - (2 * c) + floor(26 * (m + 1) / 10) + d - 1)) % 7 ; // Zeller's congruence

    if (result == 0) result = 7;

    return result ;
}	

int wdw(void)  // Corresponding to 2
{
    int year = 0,month,day = 0;
    printf("Enter the date(format:YEAR-MONTH-DAY): ");scanf("%d-%d-%d",&year,&month,&day);
    int u = cal_wdw(year,month,day);
    printf("%s(%d) \n",table2[u - 1],u);
	
    return 0;
}

int command(void) // command mode function
{
    char string[10];
    while (1)
    {
        printf("ctime> ");
	scanf("%s",string);
        if (strcmp("exit",string) == 0) exit(123); // exit command mode
        else if (strcmp("start",string) == 0) choice(); // start choice mode
        else if (strcmp("function",string) == 0) func(); // start function mode
    }
} 

int choice(void) 
{ 
    while (1)
    {
        printf("We offer the following services(still to be expanded) \n");
        printf(" 1. Calculate the days after a day in a year \n 2. Calculate the day of the week for a date \n 3. Calculate the date of mother's day in a year \n ");
        printf("4. Calculating the zodiac of a year \n 5. Calculate the day of the year on which date \n 6. Calculate the date of father's day in a year \n ");
        printf("7. Calculate the date and quantity of Black Friday \n 8. Calculate the interval of two dates  \n ");
        printf("9. exit choice mode \n ...... \n");	
        printf("Press 1 to 9 to choice: ");
        int op = 0;
        scanf("%d",&op);
        switch (op)
        {
            case 1: day_add();continue;
	    case 2: wdw();continue;
	    case 3: mday();continue;
	    case 4: zodiac();continue;
	    case 5: dayew();continue;
            case 6: fday();continue;
            case 7: bf();continue;
            case 8: idays();continue; 
            case 9: return 0;;
            /* Selecte execution */
        }
    }

    return 0;
}
