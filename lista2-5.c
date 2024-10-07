#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,n,horas, v_horanormal; 
    float hora_extra, pagamento_bruto;

    printf("Digite o numero de empregados:  ");
    scanf("%d", &n);
    
    for (i=0;i<n;i++)
    {
        printf("Digite o numero de horas trabalhadas: ");
        scanf("%d", &horas);
        printf("Digite o valor das horas normais: ");
        scanf("%d", &v_horanormal);
        

    if (horas==40)
    {
        pagamento_bruto= horas*v_horanormal;
        printf("O pagamento bruto será %f\n", pagamento_bruto);
        
    } else if (horas>40)
        {
            hora_extra= horas - 40;
            hora_extra= hora_extra * 1.5;
            pagamento_bruto= hora_extra * horas;
            printf("O pagmento bruto será %f\n", pagamento_bruto);
        
        } else if (horas<40)
        {
            pagamento_bruto= horas*v_horanormal/2;
            printf("O pagmento bruto será %f\n", pagamento_bruto);
        }
    } 
        
return 0;

}