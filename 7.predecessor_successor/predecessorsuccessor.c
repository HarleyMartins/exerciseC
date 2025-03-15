// Faca um programa que leia um numero inteiro e retorne seu antecessor e seu sucessor.

#include <stdio.h>

int main(void) {
    int numero;

  
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

  
    printf("antecessor de %d = %d e o sucessor = %d.\n", numero, numero - 1, numero + 1);

    return 0;
}
