#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // criar matriz 10x10 para representar o tabuleiro;
    //definir 2 navios um na horizontal outro na vertical;
    //usar loops para posicionar os navios;
    //usar loop aninhado para inmprimir o tabuleiro;


    //cria a matriz do tabuleiro;
    int tabuleiro[10][10] = {0};
    
    //cria os vetores respectivos para os navios;
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    
    int posicaoNavio1 = 3;
    //loop para posicionar o navio1
    for (int i = 0; i < 3; i++){
        tabuleiro[posicaoNavio1][i] = navio1[i];
    }
        
    int posicaoNavio2 = 3;
    //loop para posicionar o navio2
    for (int j = 0; j < 3; j++)
    {
        tabuleiro[j][posicaoNavio2] = navio2[j];
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

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
