// Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fah-
// renheit. A f ́ormula de convers ̃ao  ́e: F = C ∗ (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a
// temperatura em Celsius.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lendo o valor em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Convertendo para Fahrenheit
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    // Exibindo o resultado
    printf("temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
