# Check Spelling (Structures + Sort)

Learning Goals
==============

* Understand basic sorting algorithms
* Understand different time complexities for algorithms
* Analyze situations where one algorithm is more effective than others
* Run sorting algorithms
* Measure time to run the program
* Print run times

Compare Sorting Algorithms
==============
In this assignment, you will compare the different run times between sorting algorithms. You are expected to understand the different time complexities of each algorithm. You will be studying: bubble sort, insertion sort, selection sort, and quick sort. 

You are responsible for measuring the run time of each algorithm. This assignment is different from past assignments in that you are not expected to match the expected outputs exactly. You should use these values as a guide but different computers will have different speeds. The autograder for this assignment will look at the overall time complexity trend your program produces. For more information on time complexities and the different algorithms please review the GeeksForGeeks links provided above each function in sorting.c

What to Do
==============
Complete the getSortingTime function in sorting.c You will need to get the run times for the provided sorting algorithms. You are not expected to implement these algorithms as we have provided these for you.

Check Memory Leak
=================

Your program must not crash and must not leak memory.  Use Valgrind to check for leaks.

Functions Needed
================
In sorting.c:
void getSortingTime(char * filename, int size)

	
Structure
=========
Your program should output the timing values in the following structure:
"Bubble sort of size x took y seconds"
"Insertion sort of size x took y seconds"
...
Please copy the order shown in the expected outputs (bubble, insertion, selection, quick)

WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw07.zip sorting.c
```

Upload `hw07.zip`.

