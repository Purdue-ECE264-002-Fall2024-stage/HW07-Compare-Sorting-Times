#include <stdio.h>
#include "sorting.h"

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array before sorting: ");
    printArray(arr, size);
    
    bubbleSort(arr, size);
    printf("\nBubble Sort: ");
    printArray(arr, size);

    int arr2[] = {5, 2, 8, 12, 3};

    quickSort(arr2, 0, size - 1);
    printf("\nQuick Sort: ");
    printArray(arr2, size);

    int arr3[] = {5, 2, 8, 12, 3};

    insertionSort(arr3, size);
    printf("\nInsertion Sort: ");
    printArray(arr3, size);

    int arr4[] = {5, 2, 8, 12, 3};

    selectionSort(arr4, size);
    printf("\nSelection Sort: ");
    printArray(arr4, size);
    
    //--------------------------------------------------
    // Test the loadingFile function
    int arr1[10];
    loadFile(arr1, 10);
    printf("\nArray loaded from file: ");
    printArray(arr1, 10);

    // test sorting on the loaded array
    bubbleSort(arr1, 10);
    printf("\nBubble Sort: ");
    printArray(arr1, 10);

    return 0;
}