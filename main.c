
#include <stdio.h>

#include <locale.h>

int main ()
{
    // Acentua��o com ISO 8859-1 MUDAR a UTF
setlocale(LC_ALL, "Portuguese_Brazil");
printf("hello world ����/n");
}