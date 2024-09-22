#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(char*);
void string_rev(char *A, int n);
void trim_space(char *A);
void print_arr(char *arr);


int main (){
    char *A;
    A = (char*)malloc(16);
    strcpy(A, "the sky is blue");
    solve(A);
    int i = 0;
    while(A[i] != '\0'){
        printf("%c",A[i]);
        i++;
    }
    return 0;
}


/**
 * @input A : String termination by '\0'
 * 
 * @Output string. Make sure the string ends with null character
 */
void solve(char* A) {
    int n = strlen(A);
    trim_space(A);
    printf("Trimmed array\n");
    print_arr(A);

    char *temp; //temp arr to store each word
    string_rev(A,n);
    printf("Reversed array\n");
    print_arr(A);

    int i=0, e=0, j;
    char *ptr = A;
    int p, x, y;
    while(*A != '\0'){
        j = 0;
        while (A[i] != ' '){
            i++;
            j++;
        }
        temp = (char*)malloc(j);
        
        for (p = 0; p < j; p++){
            temp[p] = A[x];
        }
        temp[p] = '\0';
        string_rev(temp, strlen(temp));
        for (p = 0; p < j; p++){
            A[] = temp[p];
        }
    }

}

void print_arr(char *arr){
    int i, n = strlen(arr);
    for (i = 0; i < n; i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
    return ;
}

void string_rev(char *A, int n){
   // int n = strlen(A);
    int i,j;
    char c;

    for (i = 0, j = n-1; (i <= n/2) && (j>= n/2); i++, j--){
        c = A[i];
        A[i] = A[j];
        A[j] = c;
    }
    return;
}

void trim_space(char *A){
    //trim begining
    int idx;
    int i = 0;
    if (A == NULL)
    return;

    while (A[i] == ' '){
        i++;
    }
    for (idx = 0; i < strlen(A); i++, idx++){
        A[idx] = A[i];
    }
    A[idx] = '\0';
    return ;
}
