

/* 

Autor : Ricardo Rodrigues Ciferri (RA)
    Joaozinho (RA)
    Maria de Lurdes (Ra)
    
    Data de criação : 03/07/2024
    Data da Alteração : 03/07/2024
    
*/    
     

// Bibliotecas


#include <stdio.h>


// Progmama Principal - Calcular Indice de Massa Corporal (IMC)



int main()
{
    
double peso;




printf("Digite o seu Peso : ");
scanf("%lf", &peso);



double altura;

  
   printf("Digite a sua altura : ");
   scanf("%lf", &altura);
    


// Calcular IMC 

double IMC;

IMC = peso / (altura * altura); 


// Escrever o Resultado

   printf("IMC = %.2lf", IMC);



// Finalização do Progama
  return 0;
}







