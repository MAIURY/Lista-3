#include <stdio.h>

int main() {
    int total = 0; 
    int nota= 0;
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0; 

    printf("Digite as notas (0 a 5) dos participantes, -1 para finalizar:\n");

    while (1) {
        printf("Nota: ");
        scanf("%d", &nota);

        if (nota == -1) { 
            break;
        }

        
        if (nota >= 0 && nota <= 5) {
            total++;
            switch (nota) {
                case 0: count0++; break;
                case 1: count1++; break;
                case 2: count2++; break;
                case 3: count3++; break;
                case 4: count4++; break;
                case 5: count5++; break;
            }
        } else {
            printf("Nota inválida! Por favor, insira uma nota entre 0 e 5 ou -1 para finalizar.\n");
        }
    }

    
    printf("\nResultados da pesquisa:\n");
    printf("Total de participantes: %d\n", total);
    printf("Quantidade de pessoas que deram nota 0: %d\n", count0);
    printf("Quantidade de pessoas que deram nota 1: %d\n", count1);
    printf("Quantidade de pessoas que deram nota 2: %d\n", count2);
    printf("Quantidade de pessoas que deram nota 3: %d\n", count3);
    printf("Quantidade de pessoas que deram nota 4: %d\n", count4);
    printf("Quantidade de pessoas que deram nota 5: %d\n", count5);

    
    int notas_boas = count4 + count5;
    float porcentagem_boas = (total > 0) ? (float)notas_boas / total * 100 : 0;

    printf("Porcentagem de pessoas que avaliaram a gestão como boa (notas 4 ou 5): %.2f%%\n", porcentagem_boas);

    return 0;
}
