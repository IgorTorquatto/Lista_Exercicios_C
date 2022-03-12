#include <stdio.h>
#include <stdlib.h>


int main()
{
   int matriz[3][3];
   
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("Digite o valor da matriz na posição [%d] [%d]: ",i+1,j+1);
           scanf("%d",&matriz[i][j]);
       }
   }
   
   printf("\nMatriz:\n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("[%d]", matriz[i][j]);
       }
       printf("\n");
   }

    return 0;
}
