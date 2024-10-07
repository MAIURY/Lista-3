#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    float creditos_aplicados, limite, credito, novo_saldo=0.0, devedor, itens_cobrados;

    printf("Número da conta:   ");
    scanf("%d", &n);
    printf("Digite o saldo devedor do inicio do mês:  ");
    scanf("%f", &devedor);
    printf("Digite o numero de itens cobrados:  ");
    scanf("%f", &itens_cobrados);
    printf("Digite os créditos aplicados no mês:  ");
    scanf("%f", &credito);
    printf("Digite o limite de crédito permitido: ");
    scanf("%f", &limite);

    novo_saldo= devedor +itens_cobrados-credito;

    if (novo_saldo> limite)
    {
        printf("\nResultados:\n");

        printf("Seu numero da conta é: %d /n", n);

        printf("Limite de credito Excedido: %.2f/n", novo_saldo);
    }
    
    else 
    {
        printf("Você ainda tem o limite: %.2f/n", limite);
    }

return 0;
}
