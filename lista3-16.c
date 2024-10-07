#include <stdio.h>

int main() {
    int n, i = 2;
    int fib0 = 0, fib1 = 1, fibAtual;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    
        while (i <= n) {
            fibAtual = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibAtual;
            i++;
        }

        
        printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibAtual);
    

    return 0;
}
