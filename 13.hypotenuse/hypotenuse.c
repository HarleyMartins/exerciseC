// Seja a e b os catetos de um triangulo cuja hipotenusa h é obtida pela equacão (h igual raiz de a ao quadrado + b ao quadrado):

// Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da formula dada.
// Imprima o resultado.

#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função sqrt

int main() {
    float a, b, h;

    // Lendo os valores dos catetos
    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);

    // Calculando a hipotenusa
    h = sqrt(a * a + b * b);

    // Exibindo o resultado
    printf("valor da hipotenusa: %.2f\n", h);

    return 0;
}
