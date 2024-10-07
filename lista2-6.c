#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0,num,maior;


    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    maior= num;
     
for (cont=2; cont<=10; cont++)
    {   
        printf("Digite o numero %d:  ", cont );
        scanf("%d", &num);

      if (num > maior) 
        {
        maior = num;
        }

    }
    
    printf("O maior numero é: %d\n", maior);

    return 0;
    
}    
