#include <stdio.h>
#include <stdlib.h>

int main (){
    int A[9] = {3, -3, 6, 8, 4, 7, 8, -2, 0};
    int min = A[0];// = -1000000000;
    int max = A[0];// = 1000000000;
    int i, j;
    int n1 = 5;
    //iterate for min
   for (i = 0; (i < n1); i++) {
        if (min >= A[i]){
            min = A[i]; //find min 
        }
        printf("i: %d j: %d New min: %d\n",A[i], A[j], min);
        if (max <= A[i]){
            max = A[i]; //find max
        } 
        printf("i: %d j: %d New max: %d\n", A[i], A[j], max);
    }

    printf("Min : %d\t Max : %d, Sum = %d\n", min, max, min+max);
    return 0;
}