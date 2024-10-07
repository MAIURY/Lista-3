#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int l1,l2,l3;

    printf("Entre com valor de l1: ");
    scanf("%d", &l1);

    printf("Entre com valor de l2: ");
    scanf("%d", &l2);

    printf("Entre com o valor de l3: ");
    scanf("%d", &l3);

    if (l1< l2+l3){
        printf("\n Pode ser os lados de um triângulo %d\n", l1,l2,l3);
    } else if (l2< l1+l3) {
        printf("\n Pode ser os lados de um triângulo %d\n", l2,l1,l3);
    } else if (l3< l2+l1){
        printf("\n Pode ser os lados de um triângulo %d\n", l3,l1,l3);
    } else {
        printf("Não pode ser os lados de um triangulo");
    }
return 0;
}