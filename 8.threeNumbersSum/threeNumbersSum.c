// Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>

int main(void) {
    int a, b, c, soma;

    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    
    soma = a + b + c;

    
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
