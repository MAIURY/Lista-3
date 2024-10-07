#include <stdio.h>
#include <stdlib.h>
int main() {
    int numero;
    unsigned long long resultado = 1; 

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; 
    }
 
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    
    printf("O fatorial de %d é: %llu\n", numero, resultado);

    return 0; 
}

// Sim, mas se  o usuário tentar calcular o fatorial de números maiores que 20 ocorrerá overflow