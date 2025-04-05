#include <stdio.h>

/*
  Simulação de movimentos de peças de xadrez:
  - Torre: FOR
  - Bispo: WHILE
  - Rainha: DO-WHILE
  Cada peça se move um número fixo de casas.
*/

int main() {
    int i;

    // Movimento da Torre (5 casas para a direita) usando FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal superior direita) usando WHILE
    printf("\nMovimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    int contador = 1;
    while (contador <= 5) {
        printf("Cima Direita\n");
        contador++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int passo = 1;
    do {
        printf("Esquerda\n");
        passo++;
    } while (passo <= 8);

    return 0;
}
