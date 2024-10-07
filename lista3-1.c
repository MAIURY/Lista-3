
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n, i;
    float km, litros ,kmporlitro, somakmporlitro=0.0, mediakm_porlitro=0.0;
    
    printf("Digite o numero de abastecimentos:  ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        printf("Abasetecimento %d:/n", i+1 );
        printf("Digite quantos km dirigidos:  ");
        scanf("%f", &km);
        printf("Entre com o valor de litros:  ");
        scanf("%f", &litros);
    }
        
        kmporlitro= km/litros; 
        somakmporlitro += kmporlitro;
        printf("Quilometragem por litro: %.2f km/l\n", kmporlitro);

        mediakm_porlitro= somakmporlitro/n;
        printf("Média de quilometragem por litro: %.2f km/l\n",mediakm_porlitro);

return 0;        
}
