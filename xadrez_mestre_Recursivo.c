#include <stdio.h>

void moverTorreRecursivo(int casas, char direcao[40]) {
 if (casas > 0){
    printf("Torre se moveu para %s uma vez\n", direcao);
    moverTorreRecursivo(casas - 1, direcao);
}}

int main() {

    //variaveis para escolhas do usuario
    char direcao[40], direcao1[30];
    int escolhaJogador, numeroMovimentosTorre, numeroMovimentosRainha, numeroMovimentosBispo, numeroMovimentosCavalo;
    int rainha = 1, bispo = 1, torre = 1, cavalo = 1;
 
    
    //Menu de escolha para qual peça será movida
    printf("Escolha uma peça para mover:\n");
    printf("1 - Rainha\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");   
    printf("4 - Cavalo\n");  
    printf("5 - Sair\n");
    scanf("%d", &escolhaJogador);

    //Verificação se a escolha é valida
    while (escolhaJogador < 1 || escolhaJogador > 5){
        printf("Escolha inválida! Tente novamente:\n");
        scanf("%d", &escolhaJogador);
    }

    //Inicio da logica
    switch (escolhaJogador)
    {
    case 1:
    printf("Escolha o numero de Movimentos:\n");
    scanf("%d", &numeroMovimentosRainha);

    printf("Escolha a direção dos Movimentos:\n");
    scanf("%s", direcao);

        for (rainha = 1; rainha <= numeroMovimentosRainha; rainha++) 
        {
          printf("Rainha se moveu para %s uma vez\n", direcao);
        }
        break;
    case 2:
    printf("Escolha o numero de Movimentos:\n");
    scanf("%d", &numeroMovimentosTorre);

    printf("Escolha a direção dos Movimentos:\n");
    scanf("%s", direcao);
        
        // Aqui chamamos a função recursiva de verdade!
        moverTorreRecursivo(numeroMovimentosTorre, direcao);
        break;
        
    case 3:
    printf("Escolha o numero de Movimentos:\n");
    scanf("%d", &numeroMovimentosBispo);

    printf("Escolha a direção dos Movimentos (ex: Caso queria que o bispo se mova uma 1 para a diagonal superior esquerda, coloque 'Cima_e_Esquerda'):\n");
    scanf("%s", direcao);

        for (bispo = 1; bispo <= numeroMovimentosBispo; bispo++) 
        {
          printf("Bispo se moveu para %s uma vez\n", direcao);
        } /// ver como melhorar os movimentos do bispo
        break;
    case 4:

    printf("Escolha se o cavalo ira para frente, para tras, para ou direita");
    scanf("%s", direcao);
    printf("Escolha se o cavalo ira a esquerda ou direita, ao percorrer as duas casas,:\n");
    scanf("%s", direcao1);

        for (numeroMovimentosCavalo = 1; numeroMovimentosCavalo <= 2; numeroMovimentosCavalo++) 
        { 
          printf("Cavalo se moveu para cima uma vez\n");
        }
          printf("Cavalo se moveu para Direita uma vez\n");
        break;
    case 5:
    {
        printf("Saindo...\n");
    }
        break;
    } 
return 0;
}