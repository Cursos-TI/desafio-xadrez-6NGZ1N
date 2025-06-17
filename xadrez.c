#include <stdio.h>

int main() {
    // Quantidade de casas a serem movimentadas por cada peça
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // ========================================
    // Movimento da TORRE
    // ========================================
    // A torre se move em linha reta (horizontal ou vertical).
    // Aqui simulamos 5 casas para a direita usando um laço FOR.
    printf("Movimento da TORRE (5 casas para a Direita):\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ========================================
    // Movimento do BISPO
    // ========================================
    // O bispo se move apenas nas diagonais.
    // Aqui simulamos 5 casas na diagonal superior direita usando um laço WHILE.
    printf("\nMovimento do BISPO (5 casas na Diagonal Cima Direita):\n");

    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // ========================================
    // Movimento da RAINHA
    // ========================================
    // A rainha se move em todas as direções (vertical, horizontal e diagonal).
    // Aqui simulamos 8 casas para a esquerda usando um laço DO-WHILE.
    printf("\nMovimento da RAINHA (8 casas para a Esquerda):\n");

    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);

    // Final do programa
    return 0;
}
