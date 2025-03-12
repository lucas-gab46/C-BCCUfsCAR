/*
Autor: Lucas Gabriel de Camargo Santos (832792)
Data de Criação: 12/08/24
Data de Alteração: 12/08/24
Objetivo: Leia Dois Valores Inteiros de Matriz e deve fornecer um Valor de Busca
*/




#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

int main() {
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int linhas, colunas;
    int chave, encontrado = 0;

    // Leitura das dimensões da matriz
    printf("Digite o número de linhas (máximo %d): ", MAX_LINHAS);
    scanf("%d", &linhas);
    printf("Digite o número de colunas (máximo %d): ", MAX_COLUNAS);
    scanf("%d", &colunas);

    // Verificar se as dimensões são válidas
    if (linhas > MAX_LINHAS || colunas > MAX_COLUNAS) {
        printf("Número de linhas ou colunas excede o máximo permitido.\n");
        return 1;
    }

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Leitura da chave de busca
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &chave);

    // Busca na matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == chave) {
                printf("Valor %d encontrado na posição [%d][%d].\n", chave, i, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }

    if (!encontrado) {
        printf("Valor %d não encontrado na matriz.\n", chave);
    }

    return 0;
}
