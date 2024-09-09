#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define PI como 3.14
const double PI = 3.14;

typedef struct {
    double x; // Coordenada x do ponto
    double y; // Coordenada y do ponto
} tPonto;
// Raio do círculo e  Ponto central do círculo
typedef struct {
    tPonto centro; 
    double raio;   
} tCirculo;

/*
Sub-rotina: leiaCirculo
Objetivo: Ler os dados de um círculo do usuário, incluindo as coordenadas do ponto central e o raio.
Parâmetros:
- circulo: Estrutura do tipo tCirculo que terá os seus dados lidos (saída de dados)
Valor de Retorno:
- nenhum
*/

// Função Leia Circulo
void leiaCirculo(tCirculo *circulo) {

    printf("Digite as coordenadas do círculo:\n");

    printf("Digite o valor da coordenada x: ");

    scanf("%lf", &circulo->centro.x);

    printf("Digite o valor da coordenada y: ");
    
    scanf("%lf", &circulo->centro.y);
    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &circulo->raio);
}

/*
Sub-rotina: escrevaCirculo
Objetivo: Escrever os dados de um círculo na tela, incluindo as coordenadas do ponto central e o raio.
Parâmetros:
- circulo: Estrutura do tipo tCirculo cujos dados serão escritos (entrada de dados)
Valor de Retorno:
- nenhum
*/
void escrevaCirculo(tCirculo circulo) {
    printf("Ponto:\n");
    printf("Coordenada x = %.2lf\n", circulo.centro.x);
    printf("Coordenada y = %.2lf\n", circulo.centro.y);
    printf("Raio = %.2lf\n", circulo.raio);
}

/*
Sub-rotina: areaCirculo
Objetivo: Calcular a área do círculo.
Parâmetros:
- circulo: Estrutura do tipo tCirculo para o qual a área será calculada (entrada de dados)
Valor de Retorno:
- Retorna a área do círculo (número de ponto flutuante)
*/
double areaCirculo(tCirculo circulo) {
    return PI * circulo.raio * circulo.raio;
}

/*
Sub-rotina: perimetroCirculo
Objetivo: Calcular o perímetro do círculo.
Parâmetros:
- circulo: Estrutura do tipo tCirculo para o qual o perímetro será calculado (entrada de dados)
Valor de Retorno:
- Retorna o perímetro do círculo (número de ponto flutuante)
*/
double perimetroCirculo(tCirculo circulo) {
    return 2 * PI * circulo.raio;
}

/*
Sub-rotina: distanciaCentroCirculos
Objetivo: Calcular a distância entre os centros de dois círculos.
Parâmetros:
- circulo1: Estrutura do tipo tCirculo representando o primeiro círculo (entrada de dados)
- circulo2: Estrutura do tipo tCirculo representando o segundo círculo (entrada de dados)
Valor de Retorno:
- Retorna a distância entre os centros dos círculos (número de ponto flutuante)
*/
double distanciaCentroCirculos(tCirculo circulo1, tCirculo circulo2) {
    double dx = circulo1.centro.x - circulo2.centro.x;
    double dy = circulo1.centro.y - circulo2.centro.y;
    return sqrt(dx * dx + dy * dy);
}

/*
Sub-rotina: distanciaMinimaCirculos
Objetivo: Calcular a distância mínima entre dois círculos, considerando a distância entre os centros e a soma dos raios.
Parâmetros:
- circulo1: Estrutura do tipo tCirculo representando o primeiro círculo (entrada de dados)
- circulo2: Estrutura do tipo tCirculo representando o segundo círculo (entrada de dados)
Valor de Retorno:
- Retorna a distância mínima entre os círculos (número de ponto flutuante)
*/
double distanciaMinimaCirculos(tCirculo circulo1, tCirculo circulo2) {
    double distanciaCentros = distanciaCentroCirculos(circulo1, circulo2);
    double somaRaios = circulo1.raio + circulo2.raio;
    return distanciaCentros - somaRaios;
}

int main() {
    tCirculo circulo1;
    tCirculo circulo2;

    printf("Círculo 1\n");
    leiaCirculo(&circulo1);
    escrevaCirculo(circulo1);

    printf("Círculo 2\n");
    leiaCirculo(&circulo2);
    escrevaCirculo(circulo2);

    double area = areaCirculo(circulo1);
    printf("Área do círculo 1 = %lf\n", area);

    area = areaCirculo(circulo2);
    printf("Área do círculo 2 = %lf\n", area);

    double perimetro = perimetroCirculo(circulo1);
    printf("Perímetro do círculo 1 = %lf\n", perimetro);

    perimetro = perimetroCirculo(circulo2);
    printf("Perímetro do círculo 2 = %lf\n", perimetro);

    double distancia = distanciaCentroCirculos(circulo1, circulo2);
    printf("Distância entre os centros dos círculos = %lf\n", distancia);

    double distanciaMinima = distanciaMinimaCirculos(circulo1, circulo2);
    printf("Distância mínima entre os círculos = %lf\n", distanciaMinima);

    return 0;
}
