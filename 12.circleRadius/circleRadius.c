// Leia o valor do raio de um cırculo. Calcule e imprima a area do cırculo correspondente. A area do cırculo
//  ́e A = π ∗ r^2
// onde r  ́e o raio e sendo π = 3.141592.

#include <stdio.h>

int main() {
    float raio, area;
    const float pi = 3.141592;

    // Lendo o valor do raio
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Calculando a área do círculo
    area = pi * raio * raio;

    // Exibindo o resultado
    printf("A area do circulo é: %.6f\n", area);

    return 0;
}
