#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float salario=0.0, venda, porcentagem= 9, resultado;


    printf("Digite o valor das venda:  ");
    scanf("%f", &venda);

    resultado= porcentagem/100 * venda;

    salario= 200+ resultado;

    printf("Seu salario %f /n ", salario);

}