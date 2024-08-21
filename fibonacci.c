// Autor : Lucas Gabriel de camargo Santos (832792)
// Data da Modificação : 19/08/24
// Data Da Aleração : 19/08/24
//Objetivo : Fazer um progama que leia um valor e apresente o numero de Fibonacci 



// Biblioteca

#include <stdio.h>

// Inicio do Progama

int main()
{
    
     // Função Long Long Para Numeros Inteiros Por Conta do espaço da memoria
     
   long long int n, PrimeiroN = 0, SegundoN = 1, prox, c;
   // Inteiros de I e J
   int i,j;
   
   // Função Scanf para Decimal
   scanf("%d", &j);
   
    //Comando For Para as Variavéis
   for(i=1; i<=j; i++,PrimeiroN = 0, SegundoN = 1)
   {
       // Scanf Para Long Long Decimal para um espaço de memoria maior
       scanf("%lld",&n);
       n=n+1;
       
       // Comando For para as Aproximações
       for ( c = 0 ; c < n ; c++ )
       {
           //If para essas Aproximações
          if (c <= 1) prox = c;
          else
          {
             // Somas usando Aproximações e os Numeros Usando as Variaveis
             prox = PrimeiroN + SegundoN;
             PrimeiroN = SegundoN;
             SegundoN = prox;
          }
       }
       
       // Mostrando Na Tela Os Resultados de Termo da Serie de Fibonacci
         printf("Fib(%lld) = %lld\n",n-1,prox);
     // Fim Do Progama
     
   }
   


   return 0;     
}