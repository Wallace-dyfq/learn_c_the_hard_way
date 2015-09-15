CFLAG=-Wall -g
all: ex1
	gcc ${CFLAG} ex1.c -o ex1
clean:
#	rm -f ex{1,3,7,8,9,10,11,12,13,14,15}
	rm ex[0-9][0-9]


