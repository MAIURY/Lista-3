#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;
    float salario = 0.0;
    int horas_trabalhadas, itens_produzidos;
    float salario_hora, vendas_brutas, valor_item;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        
        printf("Digite o código do empregado (1 - Gerente, 2 - Trabalhador Comum, 3 - Comissionado, 4 - Por empreitada): ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                
                printf("Digite o salário mensal do gerente: ");
                scanf("%f", &salario);
                salario /= 4; 
                break;

            case 2:
                
                printf("Digite o salário por hora do trabalhador comum: ");
                scanf("%f", &salario_hora);
                printf("Digite o número de horas trabalhadas na semana: ");
                scanf("%d", &horas_trabalhadas);

                if (horas_trabalhadas <= 40) {
                    salario = salario_hora * horas_trabalhadas;
                } else {
                    salario = salario_hora * 40 + (salario_hora * 1.5 * (horas_trabalhadas - 40));
                }
                break;

            case 3:
                
                printf("Digite o valor das vendas brutas do trabalhador por comissão: ");
                scanf("%f", &vendas_brutas);
                salario = 250 + 0.057 * vendas_brutas;
                break;

            case 4:
                
                printf("Digite o número de itens produzidos: ");
                scanf("%d", &itens_produzidos);
                printf("Digite o valor por item produzido: ");
                scanf("%f", &valor_item);
                salario = itens_produzidos * valor_item;
                break;

            default:
                printf("Código inválido!\n");
                salario = 0.0;
                break;
        }

        
        printf("O pagamento semanal do empregado é: R$ %.2f\n", salario);

        
        printf("Deseja calcular o pagamento de outro empregado? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("Programa encerrado.\n");
    return 0;
}
