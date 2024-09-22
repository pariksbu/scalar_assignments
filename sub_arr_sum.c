#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, n, k, A[3] = {2, 9, 5}, n1 = 3;

    long long ans = 0, sum = 0;

    for (i = 0; i < n1; i++){
        printf ("Sub arr from %d - %d", i+1, n1);
        for (j = i; j < n1; j++){
            sum = 0;
            printf("\nLoop for: ");
            for (k = i; k <= j; k++){
                printf("%d ", A[k] );
                sum += A[k];
            }
            //
            ans += sum;
            printf(" Sum: %d ",sum);
        }
        printf("\n");
        printf(" ans is : %d",ans);
        printf("\n");
    }
    //printf("sum is :%d\n", sum);
    return 0;
}