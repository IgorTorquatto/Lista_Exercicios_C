#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,aux,*v,z;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&z);
    
    v=(int *)malloc(z*sizeof(int));
    
    for(int i=0;i<z;i++){
        v[i]=rand() %100;
    }
    
    printf("\nVetor:\n");
    
    for(int i=0;i<z;i++){
        printf("(%d) ",v[i]);
    }
    
    printf("\nVetor Ordenado: \n");
    
    for(x=0;x<z;x++){
        for(y=x+1;y<z;y++){
            if(v[y]<v[x]){
                aux=v[x];
                v[x]=v[y];
                v[y]=aux;
            }
        }
    }
    
    for(int i=0;i<z;i++){
        printf("(%d) ",v[i]);
    }
    return 0;
}

