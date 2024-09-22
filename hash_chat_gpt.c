#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int index;
} NumIndex;

int findPairWithSum(int arr[], int size, int targetSum) {

    int c = 0;
    // Create a hash table to store elements and their indices
    NumIndex* hashTable = (NumIndex*)malloc(size * sizeof(NumIndex));

    for (int i = 0; i < size; i++) {
        // Calculate the complement needed to reach the target sum
        int complement = targetSum - arr[i];
        
        // Check if the complement is in the hash table

        //printf ("DBG: Complement: %d Size: %d modulo: %d\n", complement, size, complement % size);
        printf("\n");
        if (hashTable[complement % size].value == complement) {
            //printf("DBG: hash value: %d\n",hashTable[complement % size].value);
            // If found, create and return the result array
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = hashTable[complement % size].index;
            result[1] = i;
            c++;
           // free(hashTable);
           // return result;
        }
        
        // If not found, store the current element and its index in the hash table
        hashTable[arr[i] % size].value = arr[i];
        hashTable[arr[i] % size].index = i;

        //printf ("hashtable index: %d hashtable value: %d\n", arr[i] % size, arr[i]);

    }
    
    // If no pair is found, return NULL
    free(hashTable);
    return c;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 7;

    int result = findPairWithSum(arr, size, targetSum);

    if (result != NULL) {
        printf("count: %d\n", result);
        //free(result);
   // } else {
   //     printf("No pair with sum %d found in the array\n", targetSum);
    }

    return 0;
}