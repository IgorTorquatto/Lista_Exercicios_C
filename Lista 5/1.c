#include <stdio.h>


int main()
{
    int n;
    printf("Digite o número do tamanho do vetor: \n");
    scanf("%d",&n);
    int vetor[n];
    
    for(int i=0;i<n;i++){
        printf("Digite o valor da posição %d do vetor.\n",i+1);
        scanf("%d",&vetor[i]);
    }
    
    printf("Vetor: \n");
    
    for(int x=0;x<n;x++){
    printf(" %d - ",vetor[x]);
    }
    
    int z;
    printf("Digite um valor:\n");
    scanf("%d",&z);
    
    for(int u;u<n;u++){
        if(z==vetor[u]){
            vetor[u]=-1;
        }
    }
    
    printf("Novo Vetor: \n");
    for( int i=0;i<n;i++){
        if(vetor[i]>=0){
            printf("%d -",vetor[i]);
        }
    }
    
    return 0;
}
