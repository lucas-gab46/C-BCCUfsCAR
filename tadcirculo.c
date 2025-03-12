

/*
Autor: Lucas Gabriel De Camargo Santos (832792)
Data de Criação: 28/08/24
Data de Alteração: 28/08/24
Objetivo: Implemente as sub-rotinas de manipulação de um círculo, a saber: lerCirculo, escreverCirculo, areaCirculo, perimetroCirculo, distanciaCentroCirculos e deslocaCirculo. Adicionalmente, após implementar as sub-rotinas descritas anterioremente, implemente a sub-rotina 
distanciaMinimaCirculos
*/





// Bibliotecas 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
  double x; 
  double y;
} tPonto; 

typedef struct {
    tPonto centro;
    tCirculo circulo;
    tPonto
    double raio;
    tPonto distanciaCentroCirculos;
    tPonto distancia;
    tPonto deslocaCirculo;
    tPonto perimetro = perimetroCirculo;
    double distanciaCentros;
    const double  pi = 3.14;


} tCirculo;



// 

void leiaCirculo(tCirculo *);
void escrevaCirculo(tCirculo);

// Função Principal

int main()
{
  // Declarações Locais 
  
  tCirculo circulo1;
  tCirculo circulo2;
  
  // Leitura Desses 
  
  printf("Circulo 1\n");
  leiaCirculo(&circulo1);
  escrevaCirculo(circulo1);
  
  printf("Circulo 2\n");
  leiaCirculo(&circulo2);
  escrevaCirculo(circulo2);
  
  // operações com círculo
  
  area = areaCirculo(circulo1);
  printf("area do circulo 1 = %ld\n", area);
  
  area = areaCirculo(circulo2);
  printf("area do circulo 1 = %lf\n", area);
  
  perimetro = perimetroCirculo(circulo1);
  printf("perimetro do circulo 1 = %lf\n", perimetro);

  perimetro = perimetroCirculo(circulo2);
  printf("perimetro do circulo 1 = %lf\n", perimetro);

  distancia = distanciaCirculoRaio(circulo1, circulo2);
   printf("Distancia dos raios entre circulo1 e circulo2 = %lf\n", distancia);
  
  distancia = DistanciaCentroCirculos(circulo1, circulo2);
  printf("Distancia dos raios no centro entre circulo1 e circulo2 = %lf\n", distancia);

  distancia = distanciaMinimaCirculos(circulo1, circulo2);
  printf("Distancia mínima entre circulo1 e circulo2 = %lf\n", distancia);    
  
  
  
  return 0;
}

/* 
  Nome: leiaCirculo
  Objetivo: ler os dados de um círculo, ou seja, ler as
            coordenadas de seu ponto central e o valor
            do seu raio.
  Parâmetro Formais
  - circulo: circulo que terá os seus dados lidos
             (parâmetro de saída de dados)
  Valor de retorno: nenhum.
 */

void leiaCirculo(tCirculo *circulo)
{
  printf("Digite as coordenadas do circulo:\n");
  printf("Digite o valor da coordenada x: ");
  // scanf("%lf", &(*circulo).centro.x);
  scanf("%lf", &circulo->centro.x);
  printf("Digite o valor da coordenada y: ");
  // scanf("%lf", &circulo->centro.y);
  scanf("%lf", &(*circulo).centro.y);
  printf("Digite o valor do raio do circulo: ");
  // scanf("%lf", &(*circulo).raio);
  scanf("%lf", &circulo->raio);

}

/* 
  Nome: escrevaCirculo
  Objetivo: escrever os dados de um círculo, ou seja, as
            coordenadas de seu ponto central e o valor
            do seu raio.
  Parâmetro Formais
  - c: circulo que terá os seus dados escritos
             (parâmetro de entrada de dados)
  Valor de retorno: nenhum.
 */
 
void escrevaCirculo(tCirculo c)
{
  printf("Ponto:\n");
  printf("Coordenada x = %.2lf\n", c.centro.x);
  printf("Coordenada y = %.2lf\n", c.centro.y);
  printf("Raio = %.2lf\n", c.raio);
}