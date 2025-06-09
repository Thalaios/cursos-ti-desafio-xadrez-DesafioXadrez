#include <stdio.h>

// Função recursiva para Torre
void moverTorreRecursivo(int casas, char direcao[40]) {
    if (casas > 0) {
        printf("Torre se moveu para %s uma vez\n", direcao);
        moverTorreRecursivo(casas - 1, direcao);
    }
}

// Função recursiva para Bispo
void moverBispoRecursivo(int casas, char direcao[40]) {
    if (casas > 0) {
        printf("Bispo se moveu para %s uma vez\n", direcao);
        moverBispoRecursivo(casas - 1, direcao);
    }
}

// Função recursiva para Rainha
void moverRainhaRecursivo(int casas, char direcao[40]) {
    if (casas > 0) {
        printf("Rainha se moveu para %s uma vez\n", direcao);
        moverRainhaRecursivo(casas - 1, direcao);
    }
}

int main() {
    // Variáveis
    char direcao[40];
    int escolhaJogador;
    int numeroMovimentosTorre, numeroMovimentosRainha, numeroMovimentosBispo;

    // Menu de escolha
    printf("Escolha uma peça para mover:\n");
    printf("1 - Rainha\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");
    printf("4 - Cavalo\n");
    printf("5 - Sair\n");
    scanf("%d", &escolhaJogador);

    // Verificação
    while (escolhaJogador < 1 || escolhaJogador > 5) {
        printf("Escolha inválida! Tente novamente:\n");
        scanf("%d", &escolhaJogador);
    }

    //switch de escolha do jogador
    switch (escolhaJogador) {
        case 1:
            printf("Escolha o número de movimentos:\n");
            scanf("%d", &numeroMovimentosRainha);
            printf("Escolha a direção dos movimentos:\n");
            scanf("%s", direcao);
            moverRainhaRecursivo(numeroMovimentosRainha, direcao);
            break;

        case 2:
            printf("Escolha o número de movimentos:\n");
            scanf("%d", &numeroMovimentosTorre);
            printf("Escolha a direção dos movimentos:\n");
            scanf("%s", direcao);
            moverTorreRecursivo(numeroMovimentosTorre, direcao);
            break;

        case 3:
            printf("Escolha o número de movimentos:\n");
            scanf("%d", &numeroMovimentosBispo);
            printf("Escolha a direção dos movimentos:\n");
            scanf("%s", direcao);
            moverBispoRecursivo(numeroMovimentosBispo, direcao);
            break;

        case 4:
            printf("Escolha a direção do cavalo (ex: Duas_para_cima_uma_para_direita):\n");
            scanf("%d", direcao);
            for (int i = 1; i <= 1; i++) 
            {   for ( int j = 1; j <= 2; j++ )
            printf("Cavalo se moveu para cima uma vez\n");
            }
            printf("Cavalo se moveu para Direita uma vez\n");
            break;

        case 5:
            printf("Saindo...\n");
            break;
    }

    return 0;
}
