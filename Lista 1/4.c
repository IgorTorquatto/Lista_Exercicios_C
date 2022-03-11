#include <stdio.h>

int main(){
    float raio,area;
    printf("Digite o valor do raio do círculo: ");
    scanf("%f",&raio);
    
    area= 3.14 * (raio*raio);
    
    printf("O valor da area do Circulo é de : %1.2f.",area);
    
    return 0;
}

