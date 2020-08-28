/* If you don't want to write code to execute ctime's functions, 
   you can use function mode
*/

#include <stdio.h>
#include <string.h>

#define EQUAL(a,b) (strcmp(a,b) == 0)

void _print_start(char *str)
{
    printf("\n========Start run %s function======== \n",str);
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
    else if (EQUAL(name,"exit")) return 0;

    return 1; 
}

int func(void)
{
    char func_name[10];
    int num = 0; // set a number, tell the program where func is pointing

    while (1)
    {
        printf("Enter function name(if want exit,enter \"exit\"): ");
        scanf("%s",func_name);
        
        if (!(EQUAL(func_name, "exit"))) _print_start(func_name);
        int i = run(func_name);
        if (!(EQUAL(func_name, "exit"))) printf("=========End run %s function========= \n\n",func_name);

        if (i != 1) return 0; // Identify whether to exit normally
    }

    return 0;
}
