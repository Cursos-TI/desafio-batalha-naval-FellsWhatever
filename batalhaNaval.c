#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    printf("Este é o tabuleiro vazio:\n");
    for (int i = 0; i < 10; i++){
        printf("\n");
        for ( int j = 0; j < 10; j++)
        {
            printf("%d", tabuleiro[i][j]);

        };
};

//posicionar os barcos

//barco 1
 tabuleiro[1][0] = 1;
 tabuleiro[1][1] = 1;
 tabuleiro[1][2] = 1;

 //barco 2
 tabuleiro[9][7] = 1;
 tabuleiro[8][7] = 1;
 tabuleiro[7][7] = 1;

 printf("\n\nEste é o tabuleiro com os barcos:\n");
    for (int i = 0; i < 10; i++){
        printf("\n");
        for ( int j = 0; j < 10; j++)
        {
            printf("%d", tabuleiro[i][j]);

        };
};

    return 0;
}
