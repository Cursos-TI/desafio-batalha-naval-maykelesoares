#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Nível - Mestre

int main() {
    // criar 3 matrizes separadas, cada uma para um efeito de habilidade
    // valor das matrizes de habilidade = 1;
    // definir ponto de origem para inserir cada matriz no tabuleiro

    //cria a matriz do tabuleiro;
    int tabuleiro[10][10] = {0};
    
    int navio1[3] = {3, 3, 3}; //cria o vetor do primeiro navio
    int navio2[3] = {3, 3, 3}; //cria o vetor do segundo navio
    int navio3[3] = {3, 3, 3}; //cria o vetor do terceiro navio
    int navio4[3] = {3, 3, 3}; //cria o vetor do quarto navio

    //criação das matrizes de habilidade
    int cruz[3][5];    
    int cone[3][5];
    int octaedro[3][5];

    for (int i = 0; i < 3; i++) //insere o navio 1 na vertical na matriz tabuleiro
    {
        tabuleiro[i][5] = navio1[i];
    }
    
    for (int i = 2; i < 5; i++) //insere o navio 2 na horizontal na matriz tabuleiro
    {
        tabuleiro[9][i] = navio2[i];
    }
    
    for (int i = 0; i < 3; i++) //insere o navio 3 na diagonal esquerda na matriz tabuleiro
    {
        tabuleiro[i][i] = navio3[i];
    }

    for (int i = 0; i < 3; i++) //insere o navio 4 na diagonal direita na matriz tabuleiro
    {
        tabuleiro[i][9 - i] = navio4[i];
    }
    
    //inicialização para a matriz da a cruz
    for (int i = 0; i < 3; i++)     //loop externo para linhas
    {
        for (int j = 0; j < 5; j++)  // loop interno para colunas
        {
            if (i == 1 || j == 2)    // condicional para modificar a matriz
            {
                cruz[i][j] = 1;     // parte afetada pela habilidade
            } else{
                cruz[i][j] = 0;  // parte nao afetada
            }
                    
        }        
    }

    int linhaCruz = 3; //posicionamento da cruz
    int colunaCruz = 4;
    
    for (int i = 0; i < 3; i++) // 
    {
        for (int j = 0; j < 5; j++)
        {
            tabuleiro[linhaCruz + i][colunaCruz + j] = cruz[i][j]; // inserindo a matriz cruz na matriz tabuleiro
        }
        
    }

    //inicialização para matriz do cone
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2 || j == 2 || (i == 1 && (j % 2 != 0)))
            {
                cone[i][j] = 1;
            } else{
                cone[i][j] = 0;
            }
                
        }
    }

    int linhaCone = 6;  //posição do cone
    int colunaCone = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tabuleiro[linhaCone + i][colunaCone + j] = cone[i][j]; // insere a matriz cone na matriz tabuleiro
        }
    }

    //inicialização da matriz do octadreo
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 2 || i == 1 && (j % 2 != 0))
            {
                octaedro[i][j] = 1;
            } else{
                octaedro[i][j] = 0;
            }
        }
    }

    int linhaOctaedro = 7;  // posição do octaedro
    int colunaOctaedro = 5;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tabuleiro[linhaOctaedro + i][colunaOctaedro + j] = octaedro[i][j];  //inserir a matriz do octaedro na matriz tabuleiro
        }
        
    }

    //loop aninhado para imprimir o tabuleiro;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}
