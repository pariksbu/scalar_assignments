#include <stdio.h>
#include <stdlib.h>

int main (){
    int A[3] = {2,5,9};
    int i, j, n = 3;
    long long ans = 0; sum = 0;

    //calculate pfx sum:
    int pfx_sum[n]; 
    pfx_sum[0] = A[0];
    for (i = 1; i < n; i++){
        pfx_sum[i] = pfx_sum[i-1] + A[i];
    }

    
}