#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, s = 0;
    int n11 = 3;
    int n12 = 4;
    int *c_s = (int*)malloc(n12 * sizeof(int));
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,2,3,4}};

    for (j = 0; j < n12; j++) {
        s = 0;
        for (i = 0; i < n11; i++) {
            printf("i : %d j : %d, A[i] : %d, A[j] : %d\n",i, j, A[i], A[j]);
            s += A[i][j];
        }
        c_s[j] = s;
    }
    //*len1 = n11;
    for (i = 0; i < n11; i++)
    printf ("%d ", c_s[i]);
    return 0;
}