#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

// Função para inicializar o tabuleiro com zeros (representando água)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = VALOR_AGUA;
        }
    }
}

// Função para imprimir o tabuleiro no console
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se um navio pode ser posicionado horizontalmente
int podePosicionarHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0; // ultrapassa borda
    }

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha][coluna + i] != VALOR_AGUA) {
            return 0; // sobreposição
        }
    }

    return 1;
}

// Função para verificar se um navio pode ser posicionado verticalmente
int podePosicionarVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        return 0; // ultrapassa borda
    }

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha + i][coluna] != VALOR_AGUA) {
            return 0; // sobreposição
        }
    }

    return 1;
}

// Função para posicionar um navio horizontalmente
void posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha][coluna + i] = VALOR_NAVIO;
    }
}

// Função para posicionar um navio verticalmente
void posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha + i][coluna] = VALOR_NAVIO;
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água (0)
    inicializarTabuleiro(tabuleiro);

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2, colunaHorizontal = 3;
    int linhaVertical = 5, colunaVertical = 7;

    // Verifica e posiciona o navio horizontal
    if (podePosicionarHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal)) {
        posicionarNavioHorizontal(tabuleiro, linhaHorizontal, colunaHorizontal);
    } else {
        printf("Erro: Não foi possível posicionar o navio horizontal.\n");
    }

    // Verifica e posiciona o navio vertical
    if (podePosicionarVertical(tabuleiro, linhaVertical, colunaVertical)) {
        posicionarNavioVertical(tabuleiro, linhaVertical, colunaVertical);
    } else {
        printf("Erro: Não foi possível posicionar o navio na vertical.\n");
    }

    // Exibe o tabuleiro final com os navios
    imprimirTabuleiro(tabuleiro);

    return 0;
}