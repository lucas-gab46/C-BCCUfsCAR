#include <stdio.h>

int main() {
    // Autor : Lucas Gabriel De Camargo Santos
    // Data de Criação 10/07/2024
    // RA :832792
// Objetivo : Calcular Media de alunos de CAP
    // Ler as Notas Das Provas 
    double notaProva1, notaProva2, notaProva3;

    printf("Digite a nota da prova 1: ");
    scanf("%lf", &notaProva1);

    printf("Digite a nota da prova 2: ");
    scanf("%lf", &notaProva2);

    printf("Digite a nota da prova 3: ");
    scanf("%lf", &notaProva3);

    // Ler as Notas dos Trabalhos 
    double notasTrabalhos[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do trabalho %d: ", i + 1);
        scanf("%lf", &notasTrabalhos[i]);
    }

    // Calcular a média dos Trabalhos
    double somaTrabalhos = 0;
    for (int i = 0; i < 10; i++) {
        somaTrabalhos += notasTrabalhos[i];
    }
    double mediaTrabalhos = somaTrabalhos / 10.0;

    // Calcular Nota Média
    double notaMedia = notaProva1 * 0.25 + notaProva2 * 0.3 + notaProva3 * 0.3 + mediaTrabalhos * 0.2;

    // Mostrar Nota Final
    printf("Nota media = %.2lf\n", notaMedia);

    return 0;
}
