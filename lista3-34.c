#include <stdio.h>

int main() {
    
    double massa_inicial, massa_final;
    int tempo_total_segundos = 0;
    const double massa_limite = 0.5;
    const int intervalo_segundos = 50;

    
    printf("Digite a massa inicial em gramas: ");
    scanf("%lf", &massa_inicial);

    
    massa_final = massa_inicial;

    
    while (massa_final >= massa_limite) {
        massa_final /= 2; 
        tempo_total_segundos += intervalo_segundos; 
    }

    
    int horas = tempo_total_segundos / 3600;
    int minutos = (tempo_total_segundos % 3600) / 60;
    int segundos = tempo_total_segundos % 60;

    
    printf("Massa inicial: %.2f g\n", massa_inicial);
    printf("Massa final: %.2f g\n", massa_final);
    printf("Tempo necessário: %02d:%02d:%02d (hh:mm:ss)\n", horas, minutos, segundos);

    return 0;
}
