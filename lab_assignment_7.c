#include <stdio.h>

// Function to perform Bubble Sort and count swaps
void bubbleSort(int arr[], int n, int *totalSwaps) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                (*totalSwaps)++;
            }
        }
    }
}

// Function to print swaps for each value
void printSwaps(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int swaps = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swaps++;
            }
        }
        printf("%d: # of times %d is swapped\n", arr[i], arr[i]);
    }
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    int totalSwaps1 = 0;
    int totalSwaps2 = 0;

    // Sort array1 and count swaps
    bubbleSort(array1, n1, &totalSwaps1);
    printf("array1:\n");
    printSwaps(array1, n1);
    printf("total # of swaps: %d\n\n", totalSwaps1);

    // Sort array2 and count swaps
    bubbleSort(array2, n2, &totalSwaps2);
    printf("array2:\n");
    printSwaps(array2, n2);
    printf("total # of swaps: %d\n", totalSwaps2);

    return 0;
}

