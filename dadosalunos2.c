/*
Autor: Lucas Gabriel de Camargo Santos (832792)
Data de Criação: 12/08/24
Data de Alteração: 12/08/24
Objetivo: Leia todos os dados do Aluno e receba esses dados
*/

//Bibliotecas

#include <stdio.h>
#include <string.h>

#define TAMANHO_TL 36

// Definindo a estrutura para armazenar dados do aluno
typedef struct {
    int RA;               
    int IRA;              
    char sexo;            
    char nome[TAMANHO_TL]; 
    char endereco[TAMANHO_TL]; 
    int idade;          
} Aluno;

// Definindo a estrutura para armazenar dados do endereço
typedef struct {
    int tipodeLogadouro; 
    char logadouro[TAMANHO_TL]; 
    char numero[TAMANHO_TL]; 
    char complemento[TAMANHO_TL]; /
    char bairro[TAMANHO_TL]; 
    char cidade[TAMANHO_TL]; 
    char cep[TAMANHO_TL]; 
} Endereco;

int main() {
    //Declarando Arrays
    Aluno aluno[37]; 
    int i = 0;       

  

  //Solicitamento De Informações do Aluno
  
    printf("Digite seu RA: ");
    scanf("%d\n", &aluno[i].RA);

    printf("Digite seu Nome: ");
    scanf("%s\n", aluno[i].nome);

    printf("Digite seu IRA: ");
    scanf("%d\n", &aluno[i].IRA);

    printf("Digite seu Sexo: ");
    scanf("%c\n", &aluno[i].sexo);

    printf("Digite seu Endereço: ");
    scanf("%s\n", aluno[i].endereco);

    printf("Digite sua Idade: ");
    scanf("%d\n", &aluno[i].idade);

    printf("Obrigado pelas suas Informações!");
// Finaliza o programa

    return 0; 
}
