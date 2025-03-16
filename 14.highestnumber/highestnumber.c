// Faça um programa que leia dois numeros e mostre o maior deles. Se, por acaso, os dois numeros forem
// iguais, imprima a mensagem “Numeros iguais”.

#include <stdio.h>

int main() {
    float num1, num2;

    // Lendo os dois números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Comparando os números
    if (num1 > num2) {
        printf("maior numero: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("maior numero: %.2f\n", num2);
    } else {
        printf("Numeros iguais\n");
    }

    return 0;
}
