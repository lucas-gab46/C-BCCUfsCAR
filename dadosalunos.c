/*
Autor: Lucas Gabriel de Camargo Santos (832792)
Data de Criação: 12/08/24
Data de Alteração: 12/08/24
Objetivo: Leia As Informações Digitadas Pelo o Aluno e Mostre Resultados Junto com SUA Nota Média
*/
// Bibliotecas
#include <stdio.h>
#include <string.h>

#define TAMANHO_TL 0

// Informaçoes do Aluno

typedef struct {
    char sexo[TAMANHO_TL];
    char endereco[TAMANHO_TL];
} Aluno;

int main() {
    #define TAMANHO_TL 1
    Aluno aluno[1];  
    int i = 0;
// Usuario Digitando as Informações

    printf("Digite seu Sexo M/F: ");
    scanf("%1s", aluno[i].sexo); 

    printf("Você é de Araraquara? Digite S/N: ");
    scanf("%s", aluno[i].endereco); 

 // Nota Média
 
    double notaProva1, notaProva2, notaProva3;

 
    printf("Digite a sua nota da prova 1: ");
    scanf("%lf", &notaProva1);

    printf("Digite a sua nota da prova 2: ");
    scanf("%lf", &notaProva2);

    printf("Digite a sua nota da prova 3: ");
    scanf("%lf", &notaProva3);

    double notaMedia = notaProva1 * 0.25 + notaProva2 * 0.3 + notaProva3 * 0.3;

    printf("Nota média = %.2lf\n", notaMedia);
    
// Terminio Do Progama
     char terminar;
    printf("Digite F/f Para Terminar os Registros: ");
    scanf(" %c", &terminar); 

    if (terminar == 'F' || terminar == 'f') {
        printf("Obrigado pelas suas Informações!\n");
    } else {
        printf("Opção inválida para término.\n");
    }

    return 0;
}