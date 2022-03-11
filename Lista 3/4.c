#include<stdio.h>

int main(){
    int n,i;
    float maior=0,menor=100;
    printf("Digite o numero de alunos: ");
    scanf("%d",&n);
    float vetor[n];
    for(i=0;i<n;i++){
        printf("Digite a nota do aluno %d : \n",i+1);
        scanf("%f",&vetor[i]);
        printf("Então a nota do aluno %d é %.2f \n",i+1,vetor[i]);
        if(vetor[i]>maior){
            maior=vetor[i];
        }
        if(vetor[i]<menor){
            menor=vetor[i];
        }
        
    }
    
    printf("Maior nota: %.2f e menor nota: %.2f",maior,menor);
    
    
    return 0;
}
