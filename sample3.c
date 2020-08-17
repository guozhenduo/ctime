#include "main.h"

extern table4[][12]; // use this array: {"鼠","牛","虎","兔","龙","蛇","马","羊","猴","鸡","狗","猪"}

int main(void)
{
    printf("%s \n",table4[cal_zodiac(2020)]);

    return 0;
}
