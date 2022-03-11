#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    
    int vetor[n];
    
    for(int i=0;i<n;i++){
        printf("Insira um valor para o vetor n posição %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("(%d)",vetor[i]);
    }
    return 0;
}