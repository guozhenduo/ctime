#include <stdio.h>

struct date 
{
    int year;
    int month;
    int day;
} ;
typedef struct date Date;

void print(Date * self)
{
    printf("%d-%d-%d \n",self -> year,self -> month,self -> day);
}
