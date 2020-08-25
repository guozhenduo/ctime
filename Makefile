main.so: main.c time C_sample1 C_sample2 C_sample3
	gcc -fPIC -shared main.c -o main.so
time: main.c
	gcc main.c -o time
C_sample1: sample1.c
	gcc sample1.c -o C_sample1
C_sample2: sample2.c
	gcc sample2.c -o C_sample2
C_sample3: sample3.c
	gcc sample3.c -o C_sample3
