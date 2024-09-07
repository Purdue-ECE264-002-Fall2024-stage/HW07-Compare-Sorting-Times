#include <stdio.h>
#include <stdlib.h> // Add this line to include the declaration of the rand() function

void createArray(int arr[], int size);
void shuffleArray(int arr[], int size);

int main() {
    int sizes[5] = {10, 100, 1000, 10000, 100000};

    for (int i = 0; i < 5; i++) {
        int* arr = malloc(sizes[i] * sizeof(int));
        if (arr == NULL) {
            perror("Error allocating memory");
            exit(EXIT_FAILURE);
        }
        createArray(arr, sizes[i]);
        printf("Array of size %d created successfully!\n", sizes[i]);

        shuffleArray(arr, sizes[i]);
        printf("Array of size %d shuffled successfully!\n", sizes[i]); 
    }  
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
}

void shuffleArray(int arr[], int size) {
    char filename[256];
    sprintf(filename, "inputs/array%d.bin", size);
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    srand(time(0)); // Seed the random number generator
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        if (j != i) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    fwrite(arr, sizeof(int), size, file);
    fclose(file);
}