#include <stdio.h>
//Usando a biblioteca stdlib para usar o rand()
#include <stdlib.h>

int main()
{
    
    //Criando um vetor com valores aleatórios com o rand()
    int x,y,aux,vetor[6];
    for(int i=0;i<6;i++){
        vetor[i]=rand()%100;
    }
    
    //Lista antes da ordenação:
    for(int i=0;i<6;i++){
        printf("(%d) ",vetor[i]);
    }
    
    //Ordenando:
    for(x=0;x<6;x++){
        for(y=x+1;y<=5;y++){
            if(vetor[y]<vetor[x]){
                aux=vetor[x];
                vetor[x]=vetor[y];
                vetor[y]=aux;
            }
        }
    }
    
    printf("\n");
    for(int i=0;i<6;i++){
        printf("(%d) ",vetor[i]);
    }

    /*Na parte de ordenação temos que comparar duas variáveis(x e y) que vão representar as posições do vetor
    sendo x a posição anterior e y a posição posterior (ex: x é v[0] e y é v[1]). Ambos os for ( de x e y),passarão
    por todas as posições do vetor, e então começa o processo de comparação. Quando a posição do vetor posterior ao x 
    for menor que o próprio ( quando v[y]<v[x]), armazenaremos essa posição anterior( v[x]) dentro da variável auxiliar "aux"
    e aquela posição (v[x]) será ocupada agora pelo valor da posição posterior(v[y]), já a posição inicial de v[y] ( que foi trocada)
    receberá agora a variável auxiliar "aux", que contém o termo que estava na posição anterior v[x]. Feito todas as verificações 
    o vetor estará ordenado, porque sempre o termo da posição posterior(v[y)) será maior que o da posição anteior (v[x]).
    
    Caso quisermos o vetor na ordem decrescente , bastava trocar o < pelo maior na condição if, seguindo , assim, a mesma lógica
    explicada anteriormente.
    */
    return 0;
}
