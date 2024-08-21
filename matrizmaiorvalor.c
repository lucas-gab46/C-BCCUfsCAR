/*
Autor: Lucas Gabriel De Camargo Santos (832792)
Data de Criação: 14/08/24
Data de Alteração: 14/08/24
Objetivo: Mostrar o Maior Valor Da Matriz e mostrar Resultado
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

          if (matrizA > matrizB) {
    printf("O Maior Valor é da Matriz A: %d\n", matrizA);
} else if (matrizB > matrizA) {
    printf("O Maior Valor é da Matriz B: %d\n", matrizA);
} else {
    printf("Ambas as Matrizes têm o mesmo maior valor: %d\n", matrizA);
}
            return 0;
        }
        }
    }
