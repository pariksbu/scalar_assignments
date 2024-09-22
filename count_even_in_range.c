#include <stdio.h>
#include <stdlib.h>


int main (){

    int A[8] = {8,6,7,10,3,10,10,3};
              //0,1,2, 3,4, 5, 6,7
    int B[10][2] = {{0,4}, {4,7},{2,7},{6,7},{0,1},{2,6},{4,6},{0,1},{1,2}};
              //       1,    2,    3,    4,    5,    6,    7,    8,    9
    int n21 = 10;
    int *c = (int*)malloc(n21 * sizeof(int));
    int p, q;
    int i, j;
    int count = 0;

    for (i = 0; i < n21; i++){

        p = B[i][0];
        q = B[i][1];
        count = 0;
        for (j = p; j <= q; j++){
            if (A[j]%2 == 0) {
                printf("A[%d] = %d \n", j, A[j]);
                count++;
            }
        }
        printf("Count :%d in range of %d to %d\n", count, p, q);
        c[i] = count-1;
    }
    for (i = 0; i < n21; i++){
        printf("%d ",c[i]);
    }
    printf("\n");
   //*len1 = n21;
    return 0;
}