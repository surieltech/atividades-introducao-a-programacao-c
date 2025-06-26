#include <stdio.h>

int main() {
    // ---------------------------
    // Simulação do movimento da TORRE
    // Estrutura de repetição: for
    // A Torre se move 5 casas para a direita
    // ---------------------------
    printf("Movimento da Torre:\n");

    int i; // Variável de controle do loop
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ---------------------------
    // Simulação do movimento do BISPO
    // Estrutura de repetição: while
    // O Bispo se move 5 casas na diagonal para cima e à direita
    // ---------------------------
    printf("\nMovimento do Bispo:\n");

    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // ---------------------------
    // Simulação do movimento da RAINHA
    // Estrutura de repetição: do-while
    // A Rainha se move 8 casas para a esquerda
    // ---------------------------
    printf("\nMovimento da Rainha:\n");

    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // ---------------------------
    // Simulação do movimento do CAVALO
    // Estrutura: loops aninhados (for + while)
    // O Cavalo se move 2 casas para baixo e 1 casa para a esquerda (movimento em "L")
    // ---------------------------
    printf("\nMovimento do Cavalo:\n");

    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Primeiro loop: para as duas casas para baixo (loop externo com for)
    for (int m = 1; m <= passosBaixo; m++) {
        printf("Baixo\n");
        
        // Loop interno: usado aqui só para fins didáticos, repetindo uma única vez
        int contador = 0;
        while (contador < 1 && m == passosBaixo) { // Executa apenas na última etapa
            printf("Esquerda\n");
            contador++;
        }
    }

    return 0;
}