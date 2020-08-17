#include <stdio.h>

// csf : Calculate Special Festival
extern char table3[][12]; // initialize two arrays
extern char table6[][12];

int cal_mday(int year) // Calculate the mother's day of a year and return the date
{
	int i = 0,date = 1,n = 0;
	while (i < 2)
	{
		n = cal_wdw(year,5,date); 
		if (n == 7) i++;
		date++;
	}

	return date - 1;
}

int mday(void)  // mother's day
{ 
	int year = 0;printf("Enter the year: ");scanf("%d",&year);         
	printf("Mother's day in %d year is on %s %d \n",year,table3[4],cal_mday(year));

	return 0;
}

int cal_fday(int year)
{
	int i = 0,date = 1,n = 0;
	while (i < 3)
	{
	    n = cal_wdw(year,6,date);
	 	if (n == 7) i++;
	    date++;
	}

	return date - 1;
}

int fday(void) // father's day
{
	int year = 0;printf("Enter the year: ");scanf("%d",&year);
	printf("Father's day in %d year is on %s %d \n",year,table3[5],cal_fday(year));

	return 0;
}

int * cal_bf(int year) // calculate black Friday
{
	static int arr[12];
	int i = 0;
	for (int u = 0;u < 12;u++)
	{
		arr[u] = 0;
	}
	for (;i <= 12;i++)
	{
		if (cal_wdw(year,i + 1,13) == 5)  arr[i] = i + 1;
	}

	return arr;
}

int bf(void)
{
	int *u,year = 0;printf("Enter the year: ");scanf("%d",&year);
	u = cal_bf(year);
	int y = 1,ii;
	for (int i = 1;i <= 12;i++)
	{	
		ii = *(u + (i - 1));
		if (ii != 0) 
		{
			printf("%d-%d-13 \n",year,ii);
			y++;
		}
	}

	printf("There are %s black Fridays in %d \n",table6[y - 2],year);
	return 0;
}
