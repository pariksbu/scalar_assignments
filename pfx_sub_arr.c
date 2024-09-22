#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    long long A[5] = {1,2,3,4,5};
    long long C[2] = {0,0};
 
    int B[2][2] = {{1,2}, {3,4}};
 
    int i, j, p, q, x;
     int n21 = 2;
 
     for (i = 0; i < n21; i++) {
          for (j = 0; j < 2; j++){
     //        printf("idx i :%d, idx j :%d, val B[%d][%d] : %d\n", i, j, i, j, B[i][j]);
             p = B[i][0];
             q = B[i][1];
             printf("P: %d, q: %d\n", p,q);
             for (x = p; x <= q; x++) {
                 printf("C[%d]: %d, A[%d]: %d\n", i, C[i], x, A[x]);
                 C[i] += A[x];
             }
          }
         printf("\n");
     }
     printf("\n");
     for (i = 0; i < n21; i++)
     printf("%lld\t", C[i]);
 
     printf("\n");
     return 0;
}
