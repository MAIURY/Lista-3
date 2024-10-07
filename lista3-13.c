#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, digito, resto=0, contador=0;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    printf("Digite o numero que quer encontar: ");
    scanf("%d", &digito);

    while (num>0)
    {
        resto=num % 10;

    if (resto == digito)
        {
            contador++;
        }
    
        num/=10;
    }
    printf(" O digito %d foi encontrado %d vezes no numero.\n",digito, contador);

return 0;
}