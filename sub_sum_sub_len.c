#include <stdio.h>
#include <stdlib.h>

int main (){
    int A[9] = {6,3,3,6,7,8,7,3,7};
    int n1 = 9, B = 2, C = 10;
    
    int sub_len = 0;
    int sub_sum = 0;

    int i, j;

    for (i = 0; i < n1; i++){
        printf("Sub array Sum from %d to %d : ", i, j);
        sub_sum = 0;
        for (j = i; j < n1; j++) {
            sub_sum += A[j];
            printf("%d ", sub_sum);
        }
        printf("\nSub array len: %d, Sub array sum %d\n", (j-i+1), sub_sum);
        if (((j-i) == B) && (sub_sum == C)){
            printf("Returning 1\n");
            return 1;
        }
    }
    return 0;
}