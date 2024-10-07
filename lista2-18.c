#include <stdio.h>
#include <stdlib.h>


int main () {

    int i,n,n1, soma=0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) 
    {
        printf("Valor de n %d\n", i+1);
        printf("Digite sequência: ");
        scanf("%d", &n1);
        soma += n1;
    }
            
    printf("Soma da sequência %d\n", soma);

return 0;
}