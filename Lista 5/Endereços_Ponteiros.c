
#include <stdio.h>

/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e 
exiba o maior endereco.*/
int main()
{
    int a,b,*c,*d;
    a=10;
    b=20;
    c=&a;
    d=&b;
    
    printf("Endereço de a: %p \n",c);
    printf("Endereço de b: %p \n",d);
    
    int maior=0;
    if(c>d){
        printf("Endereço de a é maior do que o endereço de b\n");
    }
    if(d>c){
        printf("Endereço de b é maior do que o endereço de a \n");
    }

    /*Relembrando: com o *c temos acesso ao valor de a que é 10, com o c temos acesso ao endereço de a , já que
    c=&a, com o &c temos acesso ao endereço do próprio ponteiro c. O mesmo vale para o d.*/
    return 0;
}
