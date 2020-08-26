#include <stdio.h>
#include <string.h>
#include "smain.c"
#include "smain1.c"
#include "csf.c"
#include "chtime.c"
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
