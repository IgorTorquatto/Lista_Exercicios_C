#include <stdio.h>

float percentual(int a, int b){
    float porcentagem;
    porcentagem=( b * a)/100;
    return porcentagem;
}

int main()
{
    int i;
    float numero[i];
    for(i=0;i<2;i++){
        printf("Digite um número: \n");
        scanf("%f",&numero[i]);
    }
    
    printf("O percentual de %.2f em relação a %.2f é : %.2f %% .",numero[1],numero[0],percentual(numero[0],numero[1]));
    return 0;
}
