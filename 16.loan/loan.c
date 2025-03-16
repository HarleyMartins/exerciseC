// Faça um programa que leia o salario de um trabalhador e o valor da prestação de um emprestimo. Se aprestacao:

// For maior que 20% do salario, imprima: “Emprestimo nao concedido.”
// Caso contrario, imprima: “Emprestimo concedido.”

#include <stdio.h>

int main() {
    float salario, prestacao;

    // Lendo o salário e o valor da prestação
    printf("Digite o salario do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    // Verificando a condição
    if (prestacao > 0.2 * salario) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}
