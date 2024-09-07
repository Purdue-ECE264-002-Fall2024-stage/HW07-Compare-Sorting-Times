#ifndef SORTING_H
#define SORTING_H

// Function declarations
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void mergeSort(int arr[], int l, int r);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);
int partition(int arr[], int low, int high);

#endif // SORTING_H