#include <stdio.h>
#include <stdlib.h>

int inverter_digitos(int numero) {
    int invertido = 0;

    while (numero != 0) {
        
        invertido = invertido * 10 + numero % 10;
        
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero, resultado;


    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    
    resultado = inverter_digitos(numero);


    printf("O número com os dígitos invertidos é: %d\n", resultado);

    return 0;
}
