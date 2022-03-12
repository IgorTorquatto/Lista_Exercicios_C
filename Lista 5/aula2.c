#include <stdio.h>
#include <stdlib.h>

/*Faça um programa para receber um vetor dinâmico de tamanho n ( Digitado pelo usuário). Depois preencha
esse vetor criando um vetor auxiliar*/
int main()
{
    //Criação do ponteiro *vetor:
    int n,*vetor;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);
    
    //Determinando o tamanho do ponteiro com a função malloc:
    //Multiplicamos nossa variável n pelo sizeof de int para alocar o tamanho digitado pelo usuário.
    vetor=(int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        printf("Digite o valor para a posição %d do vetor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("(%d) ",vetor[i]);
    }
    
    free(vetor);

    return 0;
}
