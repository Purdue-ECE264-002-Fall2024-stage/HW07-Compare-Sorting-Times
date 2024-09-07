#include <stdio.h>
#include "sorting.h"

// Do not modify this function
// https://www.geeksforgeeks.org/bubble-sort-algorithm/
void bubbleSort(int arr[], int size) 
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Do not modify this function
// https://www.geeksforgeeks.org/quick-sort-algorithm/
void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        // partitioning index
        int partitionIndex = partition(arr, low, high);

        // Recursion call on the left of the partition
        quickSort(arr, low, partitionIndex - 1); 
        // Recursion call on the right of the partition
        quickSort(arr, partitionIndex + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    // select the rightmost element as pivot
    int pivot = arr[high];

    // pointer for greater element (start as the leftmost element)
    int i = low - 1;

    // traverse through all elements and move all smaller elements to the left side
    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            // swap the smaller element with the greater element pointed by i
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // move the pivot
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}