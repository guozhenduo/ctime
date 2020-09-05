/* If you don't want to write code to execute ctime's functions, 
   you can use function mode
*/

#include <stdio.h>
#include <string.h>

#define EQUAL(a,b) (strcmp(a,b) == 0)

int run_is_leap(void)
{
    int year;
    printf("Enter the argument of is_leap(format:arg1,arg2,...): ");
    scanf("%d",&year);

    printf("result is %d \n",is_leap(year));

    return 1;
}

int run(char *name)
{
    if (EQUAL(name,"bf")) bf();
    else if (EQUAL(name,"zodiac")) zodiac();
    else if (EQUAL(name,"day_add")) day_add();
    else if (EQUAL(name,"fday")) fday();
    else if (EQUAL(name,"mday")) mday();
    else if (EQUAL(name,"idays")) idays();
    else if (EQUAL(name,"dayew")) dayew();
    else if (EQUAL(name,"is_leap")) run_is_leap();
    else if (EQUAL(name,"exit")) return 0;

    return 1; 
}

int func(void)
{
    char func_name[10] = {0},back_name[10] = {0};
    int counter = 0;
    int num = 0; // set a number, tell the program where func is pointing

    while (1)
    {
        printf("Enter function name(if want exit,enter \"exit\"): ");
        scanf("%s",func_name);

        if (counter == 0 || (counter - 1) == num) strcpy(back_name,func_name);
         
        if (EQUAL(func_name,"_") && num == 0) 
            printf("Can't find the back function! \n");
            return 0;
        else if (EQUAL(func_name,"_")) strcpy(func_name, back_name);
        else if (!(EQUAL(func_name, "exit"))) printf("\n=========Start run %s function========= \n",func_name);

        int i = run(func_name);
        if (!(EQUAL(func_name, "exit"))) printf("=========End run %s function========= \n\n",func_name);
                
        if (i != 1) return 0; // Identify whether to exit normally

        if (num == 0) num+=2;
        else num++;
        counter++;
    }

    return 0;
}
