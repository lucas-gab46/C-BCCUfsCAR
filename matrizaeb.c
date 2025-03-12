/*
Autor: Lucas Gabriel De Camargo Santos (832792)
Data de Criação: 14/08/24
Data de Alteração: 14/08/24
Objetivo: Multiplicar Matriz A e B e aparecer a Multiplicação na Tela em linha
*/

#include <stdio.h>
#include <stdbool.h>

#define MAXcolunas 3
#define MAXlinhas 3

#define FALSE 0
#define TRUE  1 


// Declarando As Matrizes 
int main() {
    int matrizA[MAXlinhas][MAXcolunas];
    int matrizB[MAXlinhas][MAXcolunas];
    int resultado[MAXlinhas][MAXcolunas];
    int i, j;

    printf("Digite os valores da Matriz A:\n");
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os valores da Matriz B:\n");
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }


   

    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < MAXcolunas; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
// Mostrando o Resultado
    printf("A multiplicação das matrizes A e B resulta em:\n");
    for (i = 0; i < MAXlinhas; i++) {
        for (j = 0; j < MAXcolunas; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}   