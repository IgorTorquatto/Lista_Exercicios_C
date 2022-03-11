#include <stdio.h>

int num(int a){
   if(a%2==0){
       printf("True \n");
   }else{
       printf("False \n");
   }
}

int main()
{
   int i;
   do{
       printf("Digite um valor,ou digite 0 para encerrar o programa:: \n");
       scanf("%d",&i);
       printf("%d",num(i));
   }while(i!=0);
   
    return 0;
}

