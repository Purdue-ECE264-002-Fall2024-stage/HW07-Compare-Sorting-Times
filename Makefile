# ***
# *** You can modify this file. You do not (should not) submit this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR) 
SRCS = sorting.c main.c
OBJS = $(SRCS:%.c=%.o)

main: $(OBJS) 
	$(GCC) $(OBJS) -o main

generateFiles: $(OBJS)
	$(GCC) $(OBJS) -o main

.c.o: 
	$(GCC) -c $*.c 

clean: # remove all machine generated files
	rm -f main *.o output? *~