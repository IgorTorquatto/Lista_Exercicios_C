#include <stdio.h>

int main(){
    float valor_metros,valor_centimetros;
    printf("Digite um valor em metros: ");
    scanf("%f",&valor_metros);
    valor_centimetros=valor_metros/100;
    printf("O valor de %2.f metros em centimetros é de : %f cm.",valor_metros,valor_centimetros);
    return 0;
}

