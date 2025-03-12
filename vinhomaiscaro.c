/*
Autor: Lucas Gabriel De Camargo Santos (832792)
Data de Criação: 14/08/24
Data de Alteração: 14/08/24
Objetivo: Calcular e mostrar os dados do vinho mais caro (nome, preço e tipo).
*/

// Bibliotecas
#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
//Inicio do progama

int main() {
    char nome_vinho[MAX_NOME];
    char tipo_vinho;
    float preco_vinho;
    
    char nome_vinho_caro[MAX_NOME];
    float preco_vinho_caro = 0.0;
    char tipo_vinho_caro;
    
    // Loop para ler os vinhos
    do while (1) {
        printf("Digite o nome do vinho (ou 'FIM' para terminar): ");
        scanf("[^\n]", nome_vinho); 
        
        // Verificar se o nome é "FIM" e sair do loop se for
        if  strcpy (nome_vinho[0] == 'F' && nome_vinho[1] == 'I' && nome_vinho[2] == 'M' && nome_vinho[3] == '\0') {
            break;
        }
        
        printf("Digite o preço do vinho: ");
        scanf("%f", &preco_vinho);
        
        printf("Digite o tipo do vinho (T/B/R): ");
        scanf(" %c", &tipo_vinho); 
        
        // Verificar se o vinho atual é o mais caro
        if (preco_vinho > preco_vinho_caro) {

            preco_vinho_caro = preco_vinho;

            strcpy(nome_vinho_caro, nome_vinho);
            
            tipo_vinho_caro = tipo_vinho;
        }
    }
    
    // Exibir os dados do vinho mais caro
    printf("Vinho mais caro:\n");

    printf("Nome: %s\n", nome_vinho_caro);
    
    printf("Preço: R$ %.2f\n", preco_vinho_caro);
    printf("Tipo: %c\n", tipo_vinho_caro);
    
    return 0;
}
