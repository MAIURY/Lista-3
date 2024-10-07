#include <stdio.h>
#include <math.h>

int main (void)
{
    int n, i;
    float x, soma=1, fatorial, j;

    printf("Defina x: ");
    scanf("%f", &x);

    printf("Defina a quantidade de termos: ");
    scanf("%d", &n);

    if (n<0)
    {
        printf("Valor invalido\n"); 

    return 1;
    }

    for(i=1; i<n; i++)
    {
        fatorial=1;

    for (j=1; j<=i; fatorial ++) fatorial*= j;
    
     soma+= pow(x,i)/fatorial;

     printf(" O valor de f é %f", soma);

     return 0;

    }
}