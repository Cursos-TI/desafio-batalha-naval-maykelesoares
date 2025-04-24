#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // criar matriz 10x10 para representar o tabuleiro;
    //definir 4 navios um na horizontal outro na vertical; 2 na diagonal
    //usar loops para posicionar os navios;
    //usar loop aninhado para inmprimir o tabuleiro;


    //cria a matriz do tabuleiro;
    int tabuleiro[10][10] = {0};
    
    int navio1[3] = {3, 3, 3}; //cria o vetor do primeiro navio
    int navio2[3] = {3, 3, 3}; //cria o vetor do segundo navio
    int navio3[3] = {3, 3, 3}; //cria o vetor do terceiro navio
    int navio4[3] = {3, 3, 3}; //cria o vetor do quarto navio


    for (int i = 0; i < 3; i++) //insere o navio 1 na vertical na matriz tabuleiro
    {
        tabuleiro[i][3] = navio1[i];
    }
    
    for (int i = 0; i < 3; i++) //insere o navio 2 na horizontal na matriz tabuleiro
    {
        tabuleiro[3][i] = navio2[i];
    }
    
    for (int i = 0; i < 3; i++) //insere o navio 3 na diagonal esquerda na matriz tabuleiro
    {
        tabuleiro[i][i] = navio3[i];
    }

    for (int i = 0; i < 3; i++) //insere o navio 4 na diagonal direita na matriz tabuleiro
    {
        tabuleiro[9 - i][i] = navio4[i];
    }
    
    
    //loop aninhado para imprimir o tabuleiro;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
