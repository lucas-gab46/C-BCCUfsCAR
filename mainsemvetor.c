
// Autor : Lucas Gabriel de Camargo Santos
//RA : 832792
// Data da Modificação : 10/07/2024
// Data de Alteração : 10/07/2024




#include <stdio.h>

int main()
{
    // Ler as Notas das Provas
    double notaProva1, notaProva2, notaProva3;   
    printf("digite a nota da prova 1 : ");
    scanf("%lf", &notaProva1);

    printf("digite a nota da prova 2: ");
    scanf("%lf", &notaProva2);

    printf("digite a nota da prova 3: ");
    scanf("%lf", &notaProva3);

    // Ler as Notas dos Trabalhos
    double notaTrabalho1, notaTrabalho2, notaTrabalho3, notaTrabalho4, notaTrabalho5,
           notaTrabalho6, notaTrabalho7, notaTrabalho8, notaTrabalho9, notaTrabalho10;

    printf("Digite a nota do trabalho 1: ");
    scanf("%lf", &notaTrabalho1);

    printf("Digite a nota do trabalho 2: ");
    scanf("%lf", &notaTrabalho2);

    printf("Digite a nota do trabalho 3: ");
    scanf("%lf", &notaTrabalho3);

    printf("Digite a nota do trabalho 4: ");
    scanf("%lf", &notaTrabalho4);

    printf("Digite a nota do trabalho 5: ");
    scanf("%lf", &notaTrabalho5);

    printf("Digite a nota do trabalho 6: ");
    scanf("%lf", &notaTrabalho6);

    printf("Digite a nota do trabalho 7: ");
    scanf("%lf", &notaTrabalho7);

    printf("Digite a nota do trabalho 8: ");
    scanf("%lf", &notaTrabalho8);

    printf("Digite a nota do trabalho 9: ");
    scanf("%lf", &notaTrabalho9);

    printf("Digite a nota do trabalho 10: ");
    scanf("%lf", &notaTrabalho10);

    // Calcular a média dos trabalhos
    double mediaTrabalhos = (notaTrabalho1 + notaTrabalho2 + notaTrabalho3 + notaTrabalho4 + notaTrabalho5 +
                             notaTrabalho6 + notaTrabalho7 + notaTrabalho8 + notaTrabalho9 + notaTrabalho10) / 10.0;

    // Calcular a nota média
    double notaMedia = notaProva1 * 0.25 + notaProva2 * 0.3 + notaProva3 * 0.3 + mediaTrabalhos * 0.2;

    // Mostrar Resultados
    printf("Nota media = %.2lf\n", notaMedia);

    return 0;
}
