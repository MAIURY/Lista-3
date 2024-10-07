#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int conta1, conta2, conta3;
    float limite1, limite2, limite3;
    float saldo1, saldo2, saldo3;
    float novo_limite1, novo_limite2, novo_limite3;

    
    printf("Informe o número da conta do cliente 1: ");
    scanf("%d", &conta1);
    printf("Informe o limite de crédito do cliente 1 antes da recessão: ");
    scanf("%f", &limite1);
    printf("Informe o saldo atual do cliente 1: ");
    scanf("%f", &saldo1);


    printf("Informe o número da conta do cliente 2: ");
    scanf("%d", &conta2);
    printf("Informe o limite de crédito do cliente 2 antes da recessão: ");
    scanf("%f", &limite2);
    printf("Informe o saldo atual do cliente 2: ");
    scanf("%f", &saldo2);

    printf("Informe o número da conta do cliente 3: ");
    scanf("%d", &conta3);
    printf("Informe o limite de crédito do cliente 3 antes da recessão: ");
    scanf("%f", &limite3);
    printf("Informe o saldo atual do cliente 3: ");
    scanf("%f", &saldo3);

    
    novo_limite1 = limite1 / 2;
    novo_limite2 = limite2 / 2;
    novo_limite3 = limite3 / 2;

    
    printf("\n--- Resultados ---\n");

    
    printf("Cliente 1 (Conta %d):\n", conta1);
    printf("Novo limite de crédito: %.2f\n", novo_limite1);
    if (saldo1 > novo_limite1) {
        printf("Aviso: O saldo de %.2f excede o novo limite de crédito!\n", saldo1);
    }

    
    printf("\nCliente 2 (Conta %d):\n", conta2);
    printf("Novo limite de crédito: %.2f\n", novo_limite2);
    if (saldo2 > novo_limite2) {
        printf("Aviso: O saldo de %.2f excede o novo limite de crédito!\n", saldo2);
    }

    
    printf("\nCliente 3 (Conta %d):\n", conta3);
    printf("Novo limite de crédito: %.2f\n", novo_limite3);
    if (saldo3 > novo_limite3) {
        printf("Aviso: O saldo de %.2f excede o novo limite de crédito!\n", saldo3);
    }

    return 0;
}
