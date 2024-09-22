#include <stdio.h>
#include <stdlib.h>

int solve(int* A, int n1);

int main(){

    int A[10] = {-2,-1,0,-3,5,6,2,6,3,9};
    printf("%d\n", solve (A, 10));
    return 0;
}

int solve(int* A, int n1) {
    int max1 = A[0], i;
    int max2, flag = -1; 

    for (i = 0; i < n1; i++){
        if (max1 <= A[i]){
            max1 = A[i];
        }
    }
    i = 0;
    while(A[i] == max1) {
        i++;
    }
    if(i > 0)
    max2 = A[i];
    else
    max2 = A[0];
     
    for (i = 0; i < n1; i++){
       if (max2 <= A[i]){
           if (A[i] != max1){
               max2 = A[i];
               flag = max2;
           }

       }
    }

    return flag;
}