# ctime
[![GitHub watchers](https://img.shields.io/github/watchers/guozhenduo/ctime.svg)](https://github.com/guozhenduo/ctime/watchers)

This is a time tool written in C language.

There are still some overly lengthy code that will be improved in the next release

[中文版](https://github.com/guozhenduo/ctime/blob/master/CHINESE.md)

# Usage
`ctime` doesn't require any configuration from you.

```bash
$ git clone https://github.com/guozhenduo/ctime
Wait...
$ cd ctime
$ make
gcc main.c -o time
gcc sample1.c -o C_sample1
gcc sample2.c -o C_sample2
gcc sample3.c -o C_sample3
gcc -fPIC -shared main.c -o main.so
$ ./time
ctime> start
ctime> choice
We offer the following services(still to be expanded)
 1. Calculate the days after a day in a year
 2. Calculate the day of the week for a date
 3. Calculate the date of mother's day in a year
 4. Calculating the zodiac of a year
 5. Calculate the day of the year on which date
 6. Calculate the date of father's day in a year
 7. Calculate the date and quantity of Black Friday
 8. Calculate the interval of two dates
 9. exit choice mode
 ......
Press 1 to 9 to choice: 5

========Start========
Enter year and day(format:YEAR-DAY): 2020-45
The No.45 day of 2020 is 2020-2-14

=========End=========

We offer the following services(still to be expanded)
 1. Calculate the days after a day in a year
 2. Calculate the day of the week for a date
 3. Calculate the date of mother's day in a year
 4. Calculating the zodiac of a year
 5. Calculate the day of the year on which date
 6. Calculate the date of father's day in a year
 7. Calculate the date and quantity of Black Friday
 8. Calculate the interval of two dates
 9. exit choice mode
 ......
Press 1 to 9 to choice: 9
ctime> function
Enter function name(if want exit,enter "exit"): bf

========Start run bf function========
Enter the year: 2020
2020-3-13
2020-11-13
There are two black Fridays in 2020
=========End run bf function=========

Enter function name(if want exit,enter "exit"): exit
ctime> exit
$ 
```

# Sample
Look at sample1.c,sample2.c,sample3.c,sample1.py .

# mode
`ctime mode`
 - command
 - choice
 - function

It will add more.

# License 
[MIT License](https://github.com/guozhenduo/ctime/blob/master/LICENSE)

# Support
ctime does not support the following C standards:
* C89
* C90 

# test
After testing,the highest version of gcc compiler is 10.2, while clang is 10.0.1
