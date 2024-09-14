# ***
# *** You can modify this file. You do not (should not) submit this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c11 -g $(WARNING) $(ERROR)
VAL = valgrind --tool=memcheck --log-file=memcheck.bin --leak-check=full --verbose

SRCS = sorting.c main.c

OBJS = $(SRCS:%.c=%.o)

hw07: $(OBJS) 
	$(GCC) $(OBJS) -o hw07

.c.o: 
	$(GCC) -c $*.c 

testall: test1 test2 test3 test4 test5

test1: hw07
	./hw07 10 > outputs/output1

test2: hw07
	./hw07 100 > outputs/output2

test3: hw07
	./hw07 1000 > outputs/output3

test4: hw07
	./hw07 10000 > outputs/output4

test5: hw07
	./hw07 100000 > outputs/output5

testmemory: hw07
	$(VAL) ./hw07 1000 > outputs/output3

clean: # remove all machine generated files
	rm -f hw07 *.o outputs/output? *~
