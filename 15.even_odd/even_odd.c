// Faça um programa que leia um numero inteiro e verifique se esse numero é par ou impar.


#include <stdio.h>

int main() {
    int numero;

    // Lendo o número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verificando se é par ou ímpar
    if (numero % 2 == 0) {
        printf("numero %d par.\n", numero);
    } else {
        printf("numero %d impar.\n", numero);
    }

    return 0;
}
