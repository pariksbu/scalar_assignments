#include <stdio.h>
#include <stdlib.h>

int count_fact (int A) {

    int i, count = 0;

    for (i = 1; i*i <= A; i++) {
        if ((A%i) == 0){
            printf("I am here %d\n", __LINE__);
            if (i == (A/i)){
                printf("I am here %d\n", __LINE__);
                count += 1;
            } else {
                printf("I am here %d\n", __LINE__);
                count += 2;
            }
        }
    }
    return count;
}

int main(){

    int res = 0;
    res = solve(49);
    printf("%d\n",res);
    return 0;
}