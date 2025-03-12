/* Autor: Lucas Gabriel De Camargo Santos (832792)
Data de Criação: 14/08/24
Data de Alteração: 14/08/24
Objetivo: Multiplicar Matriz A e B e aparecer a Multiplicação na Tela
*/

#include <stdio.h>

#define MAXLINHAS 4
#define MAXCOLUNAS 4

int main() {
    int m, n, p; // Variáveis para armazenar as dimensões das matrizes
    int matrizA[MAXLINHAS][MAXCOLUNAS]; 
    int resultado[MAXLINHAS][MAXCOLUNAS] = {0}; 

    // Solicita as dimensões da Matriz A
    printf("Digite o número de linhas e colunas da matriz A (m n): ");
    scanf("%d %d", &m, &n);

    // Solicita o número de colunas da Matriz B
    printf("Digite o número de colunas da matriz B (p): ");
    scanf("%d", &p);

    // Leitura dos valores da Matriz A
    printf("Digite os valores da Matriz A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Leitura dos valores da Matriz B
    printf("Digite os valores da Matriz B (%d x %d):\n", n, p);
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("Digite o valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Cálculo da multiplicação das Matrizes A e B
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < n; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Exibição do resultado da multiplicação
    printf("A multiplicação das matrizes A e B resulta em:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
  // Finaliza o programa
    return 0; 
  

}
