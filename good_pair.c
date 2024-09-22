#include <stdio.h>
#include <stdlib.h>

int solve (int*, int, int);

int main (){
    int n1 = 5;
    int B = 7;
    int *A = (int*)malloc (n1* sizeof(int));

    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;

    printf("Result: %d\n", solve(A, n1, B));

    return 0;
}

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(int* A, int n1, int B) {
    int f, v, c = 0;
    for (f = 0; f < n1; f++) {
        for (v = f+1; v < n1; v++){
            if ((f != v) && (A[f] + A[v] == B)){
                c++;
            }
        }
    }
   
    return c;
}


/*
1, 2, 3, 4

1, 2
1, 3
1, 4

2, 3
2, 4

3, 4

*/