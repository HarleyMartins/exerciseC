// A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso, sendo que:
// i) O primeiro ganhador receber ́46% do total.
// ii) O segundo receber ́a 32% do total.
// iii) O terceiro receber ́a o restante.


#include <stdio.h>

int main() {
    float total = 780000.00;
    float primeiro, segundo, terceiro;

    // Calculando as porcentagens
    primeiro = total * 0.46; // 46% para o primeiro ganhador
    segundo = total * 0.32; // 32% para o segundo ganhador
    terceiro = total - (primeiro + segundo); // O restante para o terceiro ganhador

    // Exibindo os resultados
    printf("O primeiro ganhador recebera: R$ %.2f\n", primeiro);
    printf("O segundo ganhador recebera: R$ %.2f\n", segundo);
    printf("O terceiro ganhador recebera: R$ %.2f\n", terceiro);

    return 0;
}
