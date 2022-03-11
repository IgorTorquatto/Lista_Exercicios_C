#include <stdio.h>

int main(){
   float valor;
   printf("Digite um valor: ");
   scanf("%f",&valor);
   if(valor>20){
       printf("Valor digitado: %1.2f",valor);
   }
   else{
       printf("O valor digitado foi menor do que 20.");
   }
    
    return 0;
}