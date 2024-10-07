#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, original, invertido = 0, resto;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    
    original = num;

    
    if (num < 0) {
        num = -num;
    }

    
    while (num != 0) {
        resto = num % 10;             
        invertido = invertido * 10 + resto; 
        num /= 10;                     
    }

    
    if (original == invertido || original == -invertido) {
        printf("%d é um palíndromo.\n", original);
    } else {
        printf("%d não é um palíndromo.\n", original);
    }

    return 0;
}
