#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo, i = 1;
    float salario, horasTrabalhadas, horasExtras, vendasBrutas, itensProduzidos, pagamento;
    
    printf("Calculo de pagamento semanal de empregados.\n");

    while (1) {
        printf("\nEmpregado %d:\n", i);
        printf("Digite o código do empregado (1: Gerente, 2: Trabalhador comum, 3: Trabalhador por comissão, 4: Trabalhador por empreitada, 0: Sair): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break; 
        }

        switch (codigo) {
            case 1: 
                printf("Digite o salário mensal do gerente: ");
                scanf("%f", &salario);
                pagamento = salario; 
                printf("Pagamento semanal do gerente: R$ %.2f\n", pagamento / 4);
                break;

            case 2: 
                printf("Digite o salário por hora do trabalhador comum: ");
                scanf("%f", &salario);
                printf("Digite o número de horas trabalhadas: ");
                scanf("%f", &horasTrabalhadas);

                if (horasTrabalhadas > 40) {
                    horasExtras = horasTrabalhadas - 40;
                    pagamento = (salario * 40) + (horasExtras * salario * 1.5);
                } else {
                    pagamento = salario * horasTrabalhadas;
                }
                printf("Pagamento semanal do trabalhador comum: R$ %.2f\n", pagamento);
                break;

            case 3:
                printf("Digite o valor das vendas brutas: ");
                scanf("%f", &vendasBrutas);
                pagamento = 250 + (vendasBrutas * 0.057);
                printf("Pagamento semanal do trabalhador por comissão: R$ %.2f\n", pagamento);
                break;

            case 4: 
                printf("Digite a quantia fixa por item: ");
                scanf("%f", &salario);
                printf("Digite o número de itens produzidos: ");
                scanf("%f", &itensProduzidos);
                pagamento = salario * itensProduzidos;
                printf("Pagamento semanal do trabalhador por empreitada: R$ %.2f\n", pagamento);
                break;

            default:
                printf("Código inválido! Tente novamente.\n");
                break;
        }
        i++; 
    }

    printf("Programa encerrado.\n");
    return 0;
}
