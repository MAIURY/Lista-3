#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digito1, digito2, digito3, digito4, digito5;

    
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &num);


    if (num < 10000 || num > 99999) {
        printf("O número deve ter 5 dígitos.\n");
        return 1;
    }

    digito1 = num / 10000;          
    digito2 = (num / 1000) % 10;    
    digito3 = (num / 100) % 10;      
    digito4 = (num / 10) % 10;      
    digito5 = num % 10;              


    if (digito1 == digito5 && digito2 == digito4) {
        printf("%d é um palíndromo.\n", num);
    } else {
        printf("%d não é um palíndromo.\n", num);
    }

    return 0;
}
