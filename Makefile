install: time C_sample1 C_sample2 C_sample3 main.so 

main.so: main.c 
	gcc -fPIC -shared main.c -o main.so
	mv main.so sample/

time: main.c
	gcc main.c -o time

C_sample1: sample/sample1.c
	gcc sample/sample1.c -o C_sample1

C_sample2: sample/sample2.c
	gcc sample/sample2.c -o C_sample2

C_sample3: sample/sample3.c
	gcc sample/sample3.c -o C_sample3
