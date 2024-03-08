#include <stdio.h>

// Function to perform Bubble Sort and count swaps
void bubbleSort(int arr[], int n, int *totalSwaps) {
    for (int i = 0; i < n - 1; i++) { // Iterate through the array
        for (int j = 0; j < n - i - 1; j++) { // Compare adjacent elements
            if (arr[j] > arr[j + 1]) { // If current element is greater than next
                // Swap elements
                int temp = arr[j]; // Store current element
                arr[j] = arr[j + 1]; // Replace current element with next element
                arr[j + 1] = temp; // Replace next element with stored current element
                (*totalSwaps)++; // Increment total swaps
            }
        }
    }
}

// Function to print swaps for each value
void printSwaps(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Iterate through the array
        int swaps = 0; // Initialize swap count for current value
        for (int j = 0; j < n - 1; j++) { // Iterate through the array
            if (arr[j] > arr[j + 1]) { // If current element is greater than next
                swaps++; // Count swaps for this value
            }
        }
        printf("%d: # of times %d is swapped\n", arr[i], arr[i]); // Print swaps for current value
    }
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]); // Calculate size of array1
    int n2 = sizeof(array2) / sizeof(array2[0]); // Calculate size of array2

    int totalSwaps1 = 0; // Initialize total swaps for array1
    int totalSwaps2 = 0; // Initialize total swaps for array2

    // Sort array1 and count swaps
    bubbleSort(array1, n1, &totalSwaps1); // Call bubbleSort function for array1
    printf("array1:\n");
    printSwaps(array1, n1); // Call printSwaps function for array1
    printf("total # of swaps: %d\n\n", totalSwaps1); // Print total swaps for array1

    // Sort array2 and count swaps
    bubbleSort(array2, n2, &totalSwaps2); // Call bubbleSort function for array2
    printf("array2:\n");
    printSwaps(array2, n2); // Call printSwaps function for array2
    printf("total # of swaps: %d\n", totalSwaps2); // Print total swaps for array2

    return 0;
}


