#include<stdio.h>

int main(){
   int n,soma=0,i;
   printf("Digite um número: \n");
   scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            soma=soma+i;
        }
    }
    printf("A soma dos números pares até o número %d é %d.",n,soma);
    return 0;
}
