/*
Autor: Lucas Gabriel De Camargo Santos (832792)
Data de Criação: 14/08/24
Data de Alteração: 14/08/24
Objetivo: Multiplicar Matrizes A e B e exibir o resultado na tela
*/

#include <stdio.h>
#include <stdbool.h>

#define MAXcolunas 3
#define MAXlinhas 3

#define FALSE 0
#define TRUE  1 

int main() {
    int matrizA[MAXlinhas][MAXcolunas];
    int matrizB[MAXcolunas][MAXcolunas]; // Ajustado para a multiplicação de matrizes
    int resultado[MAXlinhas][MAXcolunas];
    int i, j, k;

    // Leitura dos valores da Matriz A
    printf("Digite os valores da Matriz A:\n");
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Leitura dos valores da Matriz B
    printf("Digite os valores da Matriz B:\n");
    for (i = 0; i < MAXcolunas; i++) { // Ajustado para a dimensão correta de B
        for (j = 0; j < MAXcolunas; j++) {
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Inicialização da Matriz Resultado com zeros
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            resultado[i][j] = 0;
        }
    }

    // Multiplicação das Matrizes
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            for (k = 0; k < MAXcolunas; k++) { // Nota: número de colunas de A deve ser igual ao número de linhas de B
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Exibição da Matriz Resultado
    printf("Resultado da multiplicação das Matrizes A e B:\n");
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    