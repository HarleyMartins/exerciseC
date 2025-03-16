#include <stdio.h>
#include <math.h> // Biblioteca necessária para operações matemáticas, como sqrt

int main() {
    float a, b, c, delta, raiz1, raiz2;

    // Lendo os coeficientes da equação
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Não e equacao de segundo grau.\n");
        return 0; // Encerra o programa
    }

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Calculando o discriminante (delta)
    delta = b * b - 4 * a * c;

    // Analisando o valor de delta
    if (delta < 0) {
        printf("Nao existe raiz real.\n");
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("Raizes identicas: %.2f\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raizes reais: %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
