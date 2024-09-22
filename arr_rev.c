#include <stdio.h>
#include <stdlib.h>

int main (){
    int* arr_1 = (int*)malloc(5*sizeof(int));
    int l2r = 0, r2l = 4, i, x;

    for (i = 0; i <= 4; i++){
        arr_1[i] = i+1;
        printf("%d\t", arr_1[i]);
    }
    printf("\n");
    i = 0;
    while (r2l>l2r) {
        printf("l2r = %d\nr2l = %d\n", l2r, r2l);
        x = arr_1[l2r];
        arr_1[l2r] = arr_1[r2l];
        arr_1[r2l] = x;
        r2l--;
        l2r++;
        i++;
    }
    
    for(i = 0; i < 5; i++){
        printf("%d\t", arr_1[i]);
    }
    return 0;
}

