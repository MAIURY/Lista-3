#include <stdio.h>

int main() {
    int num1, num2, opcao;
    float resultado;

    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    
    printf("\nEscolha uma opção:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = (float)num1 / num2; 
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Erro: Opção inválida.\n");
            break;
    }

    return 0;
}
