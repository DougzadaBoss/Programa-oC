#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

    //primeiro código mostrando como usar de maneira simples

int temperatura = 31;
   int resultado;

   temperatura > 30? printf("Está calor!\n") : printf("Está frio!\n");

//segundo código mostrando como usar com if e else

int idade = 18;
int resultado;

resultado = idade >= 18 ? 1:0;

if (resultado == 1)

printf("Você é maior de idade\n");
else
printf("Você é menor de idade\n");*/

//terceiro código comparando numeros para ver qual o maior

 int num1 = 10, num2 = 20;
   int maior;

   num1 > num2 ? (maior = num1) : (maior = num2);

   printf("O número maior é: %i\n",maior);


    return 0;
}