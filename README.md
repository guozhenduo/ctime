# ctime
This is a time tool written in C language.

There are still some overly lengthy code that will be improved in the next release

# Usage
`ctime` doesn't require any configuration from you.

```bash
$ git clone https://github.com/guozhenduo/ctime
Wait...
$ cd ctime
$ gcc main.c -o time # Don't run "gcc main.h"
$ ./time
ctime> start
We offer the following services(still to be expanded)
 1. Calculate the days after a day in a year
 2. Calculate the day of the week for a date
 3. Calculate the date of mother's day in a year
 4. Calculating the zodiac of a year
 5. Calculate the days after the year
 6. Calculate the date of father's day in a year
 7. Calculate the date and quantity of Black Friday
 8. Calculate the interval of two dates
 ......
Do you want use(choice 1~8,don't enter other)? 7
Enter the year: 2020
2020-3-13
2020-11-13
There are two black Fridays in 2020
ctime> exit
$ 
```

# Sample
Look at sample1.c,sample2.c,sample3.c,sample1.py .

# mode
`ctime` has a command mode that starts automatically at the beginning.

It will add more.

# License 
[![MIT License](https://github.com/guozhenduo/ctime/blob/master/LICENSE)]
