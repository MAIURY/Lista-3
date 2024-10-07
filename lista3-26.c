
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    double pi, term;
    
    printf("Termos\t\tAproximação de Pi\n");
    printf("--------------------------------\n");
    
    
    for (n = 1; n <= 10; n++) {
        pi = 0.0; 
        for (i = 0; i < n; i++) {
            
            term = (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
            pi += term; 
        }
        pi *= 4; 
    
        printf("%d\t\t%.10f\n", n, pi);
    }

    return 0;
}
