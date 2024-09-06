# Check Spelling (Structures + Sort)

Learning Goals
==============

* Understand basic sorting algorithms
* Understand different time complexities for algorithms
* Analyze situations where one algorithm is more effective than others
* Run sorting algorithms
* Measure time to run the program
* Print run times

Check Spelling Between two Words
==============
In this assignment, you will...

![image](https://github.com/user-attachments/assets/01aca60e-dba8-4b4f-9000-f0722bc44072)
More instructions on how to implement this can be accessed through the wikipedia link. You will implement this in levenshtein.c (hint: recursion is key). 

To generate the list of words used in testcases, usr/share/dict/words was used, which is a built-in linux file of a word list. You can even make your own testcases and play around with it if you like! To generate a random list of words (say 50 words), type into your terminal: "shuf -n 50 /usr/share/dict/words".

What to Do
==============
Complete the ...

Check Memory Leak
=================

Your program must not crash and must not leak memory.  Use Valgrind to check for leaks.

Functions Needed
================
In checker.c:
int countWords(char* filename)

bool readWords(char* filename, WordDistance* wd, int numword)

void calculateDistance(WordDistance* wd, int numword, const char* tocheck)

void sortDistance(WordDistance* wd, int numword)

In Levenshtein.c:
int Levenshtein(const char* str1, const char* str2)

	
Structure
=========
The structure looks like
``` 
typedef struct
{
  char word[MAXLENGTH]; 
  int distance;
} WordDistance;
```

WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
levenshtein.c, checker.c
```

Upload `hw07.zip`.

