// EXERCÍCIO 1: ESCREVA UM PROGRAMA QUE MOSTRE AS MENSAGENS "Início do programa" e "Fim"
// 2 LINHAS, USANDO APENAS UM PRINTF

#include <stdio.h>
#include <locale.h>
int main(void) {

    //Configura para suportar caracteres especiais
    setlocale(LC_ALL, "pt-BR.UTF-8");

    char mensagem1[] = "Início do programa\nFim do programa";
    printf("%s\n", mensagem1);
    return 0;
}