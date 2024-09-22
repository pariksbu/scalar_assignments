#include <stdio.h>
#include <stdlib.h>

int solve(int* A, int n1);

int main (){
    int x[] = {};
    int z = 0;

    z = solve(x, 6);

    printf("result : %d\n", z);
    return 0; 
}


/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int solve(int* A, int n1) {

    int i, j, f = 0, c =0;
    int t = 0;
    int max = 0;
    int x;
    /*for (i = 0; i < n1; i++){
        for (j = i; j < n1; j++){
            if (A[i] > A[j]){
                t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }

    for (i = 0; i < n1; i++){
        for (j = i; j < n1; j++){
            if (A[i] < A[j]) {
                c++;
                break;
            }
        }
    }*/

    max = A[0];
    for (i = 0; i < n1; i++){
        x = A[i];
        printf("x: %d\n", x);
        f = 0;
        for (j = 0; j < n1; j++){
            printf("Arr[%d]: %d\n", j, A[j]);
            if (x == A[j]) {
                f++;
                printf("here: %d, %d\n", A[j], f);
            }
        }
        if (max < A[i]){
            max = A[i];
        }
    }
    
    
    printf("Max is :%d\n", max);

    c = n1-f;

    return (max - c) ;
}
