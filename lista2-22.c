#include <stdio.h>
#include <stdlib.h>


int main () {

    int produto = 1, n, i=0;         
 
    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    for (i =1; i <= n ; i += 2) {
            produto *= i;

    }
    printf("O produto dos inteiros primos de 1 a 15 é: %d\n", produto);

return 0;
}