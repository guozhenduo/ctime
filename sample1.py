# ctime can be import from python

from ctypes import CDLL
ctime = CDLL("./ctime.so")
"""
Compile command:
  gcc -fPIC -shared main.c -o main.so
"""

# It's ready to use
ctime.main()
arr = ctime.cal_bf(2019)
print(arr) # The list will not be printed, Only the first address will be printed
