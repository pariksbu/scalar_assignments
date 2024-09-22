#include <stdio.h>

int main() {
    int A[5] = {2, 4, 1, 5, 3};
    int i, j, s;
    int x, sd;

    // Bubble sort implementation
    for (i = 0; i < 5 - 1; i++) { // Outer loop for passes
        sd = 0; // Reset swapped flag

        for (j = 0; j < 5 - i - 1; j++) { // Inner loop for comparisons
            printf("i: %d j: %d A[%d] : %d A[%d] : %d A[%d]: %d\n", i, j, i, A[i], j, A[j], j + 1, A[j + 1]);

            if (A[j] > A[j+1]) {
                // Swap A[j] and A[j+1]
                s = A[j];
                A[j] = A[j+1];
                A[j+1] = s;
                sd = 1; // Mark that a swap was made
            }
        }

        if (sd == 0) {
            // If no swaps were made, the array is already sorted
            break;
        }

        // Print the array after each pass
        printf("Array after pass %d: ", i + 1);
        for (x = 0; x < 5; x++) {
            printf("%d ", A[x]);
        }
        printf("\n");
    }

    // Final sorted array
    printf("Sorted Array: ");
    for (x = 0; x < 5; x++) {
        printf("%d ", A[x]);
    }
    printf("\n");

    return 0;
}
