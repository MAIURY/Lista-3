#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int  lado, i,j;

    printf("Digite os lados: ");
    scanf("%d", &lado);

    for (i=0; i<lado; i++)
    {
    printf("* ");
    }
    printf ("\n");

    for (i=0;i<lado-2; i++)
    {
    printf("*  ");
    for(j=0; j<lado; j++)
    printf(" ");
    printf("*  \n");
    }

    for (i=0; i<lado; i++)
    {
    printf("* ");
    }
    printf ("\n");

    
return 0;
}    
