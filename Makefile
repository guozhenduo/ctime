main.so: main.c time
	gcc -fPIC -shared main.c -o main.so
time: main.c
	gcc main.c -o time
