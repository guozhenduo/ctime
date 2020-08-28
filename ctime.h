#include <stdio.h>
#include <string.h>
#include "smain.c"
#include "smain1.c"
#include "csf.c"
#include "chtime.c"
#include "function/func.c"

extern int table[12];
extern char table2[][7];
extern char table3[][12];
extern char table4[][12];
extern char table5[][12];
extern char table6[][12];
extern int month_day[12];

int is_leap(int year);
int month_days(int the_year,int the_month);
Date cal_day_add(int year,int month,int day,int offset);
int day_add(void);
int cal_wdw(int year,int month,int day);
int wdw(void);
int command(void);
int choice(void);
int interval_days(int start[],int end[]);
int idays(void);
int cal_zodiac(int year);
int zodiac(void);
int cal_mday(int year);
int mday(void);
int cal_fday(int year);
int fday(void);
int * cal_bf(int year);
int bf(void);
int dayew(void);
Date cal_dayew(int year,int day);
int func(void);

/* define constant block */

/*
NOTE:
Some festivals are not on a fixed day. 
We will provide some functions to calculate the date of that festival.
*/

#define NY "1.1" // NY : New Year Day
#define IW "3.8" // IW : International Women's Day
#define VD "2.14" // VD : Valentine's Day
#define AF "4.1" // AF : April Fools' Day
#define LD "5.1" //LD : Labor Day
#define CD "6.1" // CD : Children's Day
#define ND "10.1" // ND : National Day(China)
#define CM "12.25" // CM : Christmas
#define CE "12.24" //CE : Christmas Eve
