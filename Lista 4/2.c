#include<stdio.h>

float media_arit(int a, int b){
    float media;
    media=(a+b)/2;
    return media;
}
int main(){
    float valor[2];
    for(int i=0;i<2;i++){
        printf("Digite um valor: \n");
        scanf("%f",&valor[i]);
    }
    
    printf("A média dos dois valores é : %.2f",media_arit(valor[0],valor[1]));
    return 0;
}
