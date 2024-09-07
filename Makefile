# ***
# *** You can modify this file. You do not (should not) submit this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR) 
SRCS = main.c sorting.c
OBJS = $(SRCS:%.c=%.o)

main: $(OBJS) 
	$(GCC) $(OBJS) -o main

.c.o: 
	$(GCC) -c $*.c 

clean: # remove all machine generated files
	rm -f main *.o output? *~