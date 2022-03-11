#include <stdio.h>

int dia_semana(int a){
    switch(a){
    case 1 :
    printf ("Domingo\n");
    break;
    
    case 2 :
    printf ("Segunda\n");
    break;
    
    case 3 :
    printf ("Terça\n");
    break;
    
    case 4 :
    printf ("Quarta\n");
    break;
    
    case 5 :
    printf ("Quinta\n");
    break;
    
    case 6 :
    printf ("Sexta\n");
    break;
    
    case 7 :
    printf ("Sabado\n");
    break;
    
    default:
    printf("Valor inválido");
    }
}

int main()
{
    int i;
    printf("Digite o número do dia da semana desejado: \n");
    scanf("%d",&i);
    printf("%d",dia_semana(i));
   
    return 0;
}

