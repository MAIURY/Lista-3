#include <stdio.h>
#include <stdio.h>

int main() {
    int n, i, j;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
    
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    
    for (i = n; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}