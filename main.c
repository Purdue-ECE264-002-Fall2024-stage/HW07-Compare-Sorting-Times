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
    



    return 0;
}