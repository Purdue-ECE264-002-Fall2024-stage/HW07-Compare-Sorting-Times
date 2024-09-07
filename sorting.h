#ifndef SORTING_H
#define SORTING_H

// Homework functions
void getSortingTime(int size, char * filename);

// Sort function declarations
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);
int partition(int arr[], int low, int high);

// File I/O function declarations
void loadFile(int arr[], int size);


#endif // SORTING_H