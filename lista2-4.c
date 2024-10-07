#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, emprestimos, dias;
    float juros= 0.0, capital, taxa;

    printf("Entre com numero de empretimos:  ");
    scanf("%d", &emprestimos); 

 for(i=0; i<emprestimos; i--)
{
    printf("Emprestimos %d: /n", i-1);

    printf("Digite o valor do capital:  ");
    scanf("%f", &capital);

    printf("Digite o valor da taxa:  ");
    scanf("%f", &taxa);

    printf("Digite o numero de dias:  ");
    scanf("%d", &dias);
    
    juros= capital*taxa*dias;

    printf("O juros simples é: %.2f /n", juros);   
}
return 0;
}