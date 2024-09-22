#include <stdio.h>
#include <stdlib.h>

int solve (int*, int);

int main (){
    int n1 = 5;
    int *A = (int*)malloc (n1* sizeof(int));

    A[0] = 7;
    A[1] = 4;
    A[2] = 2;
    A[3] = 10;
    A[4] = 5;

    printf("Result: %d\n", solve(A, n1));

    return 0;
}


/**
  * @input A : Integer array
  * @input n1 : Integer array's ( A ) length
  * 
  * @Output Integer
  */
int solve(int* A, int n1) {
   int i = 0, j = 0, c = 0, t;
   for (i = 0; i < n1; i++) {
    t = A[i];
    for (j = 0; j < n1; j++){
        if (i == j){
            continue;
        }
        if (t < A[j]){
            c++;
            break;
        }
    }
   }
   printf("%d\n", c);
   return c;
}
