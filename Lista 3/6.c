#include<stdio.h>

int main(){
   int n,i,fatorial=1;
   do{
      printf("Digite um número não negativo: \n");
      scanf("%d",&n);
   }while(n<0);
   for(i=1;i<=n;i++){
       fatorial=fatorial*i;
   }
   printf("O fatorial de %d é %d .",n,fatorial);
    return 0;
}
