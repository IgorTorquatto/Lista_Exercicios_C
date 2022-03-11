#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int n,contador;
    
    printf("Digite um número:\n");
    scanf("%d",&n);
    contador=0;
    while(contador<=n){
        printf("%d \n",contador);
        contador++;
    }
    return 0;
}
