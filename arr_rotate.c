#include <stdio.h>
#include <stdlib.h>

int main() {

    int A[7] = {1,1,4,9,4,7,1};
    int B = 9;
    int n1 = 7;
    int t = B%n1;
    int p = 0, q = t;
    int i, j;
    int x; //temp variable

    printf(" sizeof array : %d\nNo. of times array should ideally rotate: %d\n", n1, t);
    //Reverse complete array
    for (i = 0, j = n1-1; i <= j; i++, j--){
        x = A[i];
        A[i] = A[j];
        A[j] = x;
    }

    printf ("1st reverse complete array:\n");
    for (i = 0; i < n1; i++) {
        printf("%d ", A[i]);

    }

    printf ("\nReverse 1st Sub array from 0th index to B-1th index here B Modulo size of array n1:\n"); 
    //Reverse 1st sub array of t elements
    for (p = 0,  q = t-1; p <= q; p++, q--){
        x = A[p];
        A[p] = A[q];
        A[q] = x;
    }

    printf ("2nd Reverse 1st sub array:\n");
    for (i = 0; i < n1; i++) {
        printf("%d ", A[i]);
    }

    printf("\n Reverse 2nd sub array from B-1 index to n-1 index:\n");
    //reverse 2nd sub array from n1-t, n1;
    //p = n1-t, q = n1;
    for (p = t, q = n1-1; p <= q; p++, q--){
        x = A[p];
        A[p] = A[q];
        A[q] = x;
    }
    printf ("\n3rd Reverse 2nd sub array:\n");
    for (i = 0; i < n1; i++) {
        printf("%d ", A[i]);
    }
    //*len1 = n1;
    return 0;
}