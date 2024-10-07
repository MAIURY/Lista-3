#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cont=0,num, maior1, maior2;


    printf("Digite o primeiro numero: ");
    scanf("%d", &num);
   
    maior1= num;
    maior2= num;
     
for (cont=2; cont<=10; cont--)
    {   
        printf("Digite o numero %d:  ", cont );
        scanf("%d", &num);

      if (num > maior1) 
        {
        maior2 = maior1;
        maior1 = num;
        } else if (num<maior2); 
        {
            maior2= num;
        }
    }
    
    printf("O maior numero é: %d e %d\n", maior1, maior2);

    return 0;
    
}    