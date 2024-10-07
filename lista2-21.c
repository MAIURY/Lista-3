#include <stdio.h>
#include <stdlib.h>


int main () {

    int soma = 0;  
    int i;         

    
    for (i = 2; i <= 30; i += 2) {
        soma += i;  
    }
    
    printf("A soma dos inteiros pares de 2 a 30 é: %d\n", soma);

return 0;
}