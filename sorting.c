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
// https://www.geeksforgeeks.org/insertion-sort-algorithm/
void insertionSort(int arr[], int size)
{
    // loop through the unsorted section of the array
    // first element is already sorted
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i]; // element to be compared
        int j = i - 1; // index of the last element in the sorted section

        // move elements that are greater than temp to one position 
        // ahead of their current position
        while( j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j]; // move element up
            j--; // decrease remaining number of elements to sort
        }
        arr[j + 1] = temp; // insert temp in the correct position
    }
}

// Do not modify this function
// https://www.geeksforgeeks.org/selection-sort-algorithm-2/
void selectionSort(int arr[], int size)
{
    int i, j, min_index;
    // loop through each position in the array
    for (i = 0; i < size - 1; i++)
    {
        min_index = i; // set the current index as the minimum index

        // find the minimum element in the remaining unsorted array
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j; // update the minimum index
            }
        }

        // place the minimum element at the current position
        if(min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
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

// Do not modify this function
void loadFile(int arr[], int size)
{
    char filename[256]; // create a buffer to store the filename
    sprintf(filename, "inputs/array%d.bin", size);
    FILE *file = fopen(filename, "rb"); // open the file in read mode (binary)

    fread(arr, sizeof(int), size, file); // read the file into the array
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}