#include <stdio.h>
#include <stdlib.h>

int main (){
    int n1 = 7;
    int A[7] = {1,2,3,7,1,2,3};
    int *p = (int*)malloc(n1*sizeof(int));
    int i;
   // int p[n1];

   //calculate pfx sum 
   p[0] = A[0];

   for (i = 1; i < n1; i++){
       p[i] = A[i] + p[i-1];
   }

   for (i = 0; i < n1; i++){
    printf("\nIter : %d, pfx sum : %d\n",i, p[i]);
       if (i > 0){
           printf("Left Sum : %d Right Sum : %d\t",p[i-1], (p[n1-1]- p[i]));
           if ((p[i-1]) == (p[n1-1]- p[i])) {
               printf("Eqilib at : %d\n", A[i]);
           }
       }
   }
   return 0;
}