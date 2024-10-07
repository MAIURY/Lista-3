#include <stdio.h>

int main() {
    double x;
    int n;
    double S = 0.0;
    double fatorial = 1.0;

    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    
    for (int k = 0; k <= n; k++) {
        
        if (k > 0) {
            fatorial *= k; 
        }
        S += (x * k) / fatorial; 
    }

    
    printf("O valor da série S é: %lf\n", S);

    return 0;
}
