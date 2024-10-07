#include <stdio.h>

void decimalParaBinario(int num) {

    for (int i = 3; i >= 0; i--) {
        int bit = (num >> i) & 1;  
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int numero;

    
    printf("Digite um número em decimal: ");
    scanf("%d", &numero);


    printf("O número %d em binário é: ", numero);
    decimalParaBinario(numero);

    return 0;
}