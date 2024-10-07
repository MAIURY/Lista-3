#include <stdio.h>

float CalculaTaxas(float horas) {
    float taxa = 2.00;
    if (horas > 3.0) {
        taxa += (horas - 3.0) * 0.50; 
    }
    if (taxa > 10.00) {
        taxa = 10.00; 
    }
    return taxa;
}

int main() {
    int n, i;
    float horas, taxa, totalHoras = 0, totalTaxas = 0;

    printf("Informe o número de clientes: ");
    scanf("%d", &n);

    printf("\nCarro\tHoras\tTaxa\n");

    for (i = 1; i <= n; i++) {
        printf("%d\t", i);
        scanf("%f", &horas);
        taxa = CalculaTaxas(horas);
        printf("%.1f\t%.2f\n", horas, taxa);
        totalHoras += horas;
        totalTaxas += taxa;
    }

    printf("TOTAL\t%.1f\t%.2f\n", totalHoras, totalTaxas);

    return 0;
}
