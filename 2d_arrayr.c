#include <stdio.h>
#include <stdlib.h>

int main (){
    int **b, i, j, k = 0;
    i = j = 4;
    b = (int**)malloc(i * sizeof(int*));

    for (i = 0; i < 4; i++) {
        b[i] = (int*)malloc(j * sizeof(int));
    }

    for (i = 0; i < 4;i++){
        for (j = 0; j < 4; j++){
            b[i][j] = k++;
        }
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++){
        free(b[i]);
    }
    free(b);
}