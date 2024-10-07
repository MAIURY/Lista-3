#include <stdio.h>

int fatorial(int n) {
    if (n == 0) 
        return 1;
    else
        return n * fatorial(n - 1); 
}

int main () 
{
    int numero;

    printf("Digite o valor de n: ");
    scanf("%d", &numero);

    if (numero <0) {
        printf("Fatorial não está definido para números negativos. \n");

    }else {
        printf("O fatorial de %d é: %d\n", numero, fatorial(numero)); 
    }

    return 0;

}    