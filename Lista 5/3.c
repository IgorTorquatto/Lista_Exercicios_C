#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    
    int vetor[n];
    
    for(int i=0;i<n;i++){
        printf("Insira um valor para o vetor n posição %d: ",i+1);
        scanf("%d",&vetor[i]);
        while(vetor[i]>9||vetor[i]<0){
            printf("Valor Inválido. Insira um valor,entre 0 e 9, para o vetor n posição %d: ",i+1);
            scanf("%d",&vetor[i]);
        }
    }
    
    int x;
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d",&x);
    
    int vetor2[x];
    
    for(int i=0;i<x;i++){
        printf("Insira um valor para o vetor x posição %d: ",i+1);
        scanf("%d",&vetor2[i]);
        while(vetor2[i]>9||vetor2[i]<0){
            printf("Valor Inválido. Insira um valor,entre 0 e 9, para o vetor x posição %d: ",i+1);
            scanf("%d",&vetor2[i]);
        }
    }
    
    printf("Os dois vetores são: \n");
    printf("Vetor 1: \n");
    for(int i=0;i<n;i++){
        printf("(%d) ",vetor[i]);
    }
    
    printf("\n Vetor 2:");
    for(int i=0;i<x;i++){
        printf("(%d) ",vetor2[i]);
    }
    
    return 0;
}