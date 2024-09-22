#include <stdio.h>
#include <stdlib.h>

int main (){
    int A[5] = {1,2,3,4,5};
    int B = 3, C = 6;
    int i, j;
    int n1 = 5;
    int sum = 0;
    int si = 1, ei = B;

    for (i = 0; i < B; i++) {
        sum += A[i];
    }
    if (sum == C){
        return 1;
    }
    
    for (i = B; i < n1; i++){
        sum -= A[si-1];
        sum += A[ei];

        if (sum == C){
            return 1;
        }
        ei++;
        si++;
    }
    return 0;
}