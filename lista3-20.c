#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    int cont=0 ,num, num1, maior, menor;

    printf("Quantos numeros terá a lista:  ");
    scanf("%d", &num1);

    printf("Digite o valor 1: ");
    scanf("%d", &num);
    
    maior= maior=num;
    menor= menor=num;



    for(cont=2; cont<=num1; cont++)
    {
       
        printf("Digite os valores da lista: ", cont);
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;

        } else if (num < menor){
             
             menor= num;
         }

    }
        printf("O maior e o menor numero: é %d e %d \n", maior, menor);
}
