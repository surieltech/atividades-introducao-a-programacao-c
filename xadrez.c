#include <stdio.h>

int main() {
    // ---------------------------
    // Simulação do movimento da TORRE
    // Estrutura de repetição: for
    // A Torre se move 5 casas para a direita
    // ---------------------------
    printf("Movimento da Torre:\n");

    int i; // Variável de controle do loop
    for (i = 1; i <= 5; i++) { // para quando o i for menor ou igual a 5, o contador adiciona mais um
        printf("Direita\n");
    }

    // ---------------------------
    // Simulação do movimento do BISPO
    // Estrutura de repetição: while
    // O Bispo se move 5 casas na diagonal para cima e à direita
    // ---------------------------
    printf("\nMovimento do Bispo:\n");

    int j = 1; // Inicializa contador
    while (j <= 5) {
        printf("Cima Direita\n");
        j++; // Incrementa o contador
    }

    // ---------------------------
    // Simulação do movimento da RAINHA
    // Estrutura de repetição: do-while
    // A Rainha se move 8 casas para a esquerda
    // ---------------------------
    printf("\nMovimento da Rainha:\n");

    int k = 1; // Inicializa contador
    do {
        printf("Esquerda\n");
        k++; // Incrementa o contador
    } while (k <= 8);

    return 0;
}