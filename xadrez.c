#include <stdio.h>

int main() {
    // ========================
    // Movimento da TORRE (5 casas para a direita) - usando FOR
    // ========================
    printf("Movimento da Torre:\n");
    int i;
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ========================
    // Movimento do BISPO (5 casas na diagonal para cima e à direita) - usando WHILE
    // ========================
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while(j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // ========================
    // Movimento da RAINHA (8 casas para a esquerda) - usando DO-WHILE
    // ========================
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    return 0;
}
