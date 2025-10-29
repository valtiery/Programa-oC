#include <stdio.h>

void moverBispo(int passo, int limite) {
    if (passo > limite) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passo + 1, limite);
}


void moverTorre(int passo, int limite) {
    if (passo > limite) return;
    printf("Direita\n");
    moverTorre(passo + 1, limite);
}

void moverRainha(int passo, int limite) {
    if (passo > limite) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, limite);
}

void moverCavaloMestre() {
    printf("\nMovimento do Cavalo (Mestre):\n");

    for (int i = 1, j = 1; i <= 2 || j <= 1; i++, j++) {
        if (i <= 2) {
            printf("Cima\n");
        }

        if (j == 1) {
            printf("Direita\n");
            break; 
        }

        if (i > 3) continue;
    }
}


int main() {
    
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    
    printf("=========== NÍVEL NOVATO ===========\n");

    
    printf("\nMovimento do Bispo (Novato):\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

  
    printf("\nMovimento da Torre (Novato):\n");
    int j = 1;
    while (j <= MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    
    printf("\nMovimento da Rainha (Novato):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= MOV_RAINHA);

printf("\n=========== NÍVEL AVENTUREIRO ===========\n");
    printf("Movimento do Cavalo (Aventureiro):\n");

 
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    int m = 1;
    while (m <= 1) {
        printf("Esquerda\n");
        m++;
    }


printf("\n=========== NÍVEL MESTRE ===========\n");

    printf("\nMovimento do Bispo (Mestre):\n");
    moverBispo(1, MOV_BISPO);

    printf("\nMovimento da Torre (Mestre):\n");
    moverTorre(1, MOV_TORRE);

    printf("\nMovimento da Rainha (Mestre):\n");
    moverRainha(1, MOV_RAINHA);

    moverCavaloMestre();

    printf("\n=========== FIM DO DESAFIO ===========\n");

    return 0;
}
