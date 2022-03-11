#include<stdio.h>

int main(){
    int n;
    while(n!=0){
        printf("Digite um numero inteiro: \n");
        printf("Ou Digite 0 para encerrar o programa. \n");
        scanf("%d",&n);
        printf("O quadrado de %d é: %d \n",n,n*n);
    }
    
    return 0;
}
