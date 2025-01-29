#include <stdio.h>
int main(){


                             //                              CÓDIGO 1
//int idade;
//float renda;
/*if (condicao 1){
      if (condicao 2){
            código a ser executado se 
             a condicao 1 e condicao 2 forem verdadeiras
             }
      }
     */


    /*Programa que verifica se uma pessoa esta
    qualificada para um desconto especial com base 
    na idade e na renda mensal
    A pessoa deve ter mais de 60 anos ou menos de 18
    e ter uma renda mensal abaixo de 2000*/


/*printf("Digite sua idade: \n");
scanf("%d",&idade);

printf("Agora digite sua renda mensal: \n");
scanf("%f",&renda);

if(idade <=18 || idade >=60){

    if (renda <2000){
        printf("Você tem direito ao desconto!\n");
    }
    else{
        printf("Você não atende os critérios de salário!\n");
    }

} else
printf("Você não atende os critérios de idade!\n");





                                   //                              CÓDIGO 2



 
int idade;
float renda;
int dependentes;

//a primeira condicao idade do usuário deve estar entre 18 e 65 anos.
//a segunda condição se a renda do usuário é menor que 3000.
//a terceira condição verifica se o número de dependentes é maior que 2.


printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua renda mensal: \n");
scanf("%f",&renda);

printf("Digite o número de dependentes: \n");
scanf("%i",&dependentes);

if(idade >=18 && idade <=65){
    if(renda < 3000)
    {

        if(dependentes > 2)
        {
            printf("Os critérios foram aprovados!");

        } else{
            printf("Não atende os critérios de dependentes!");
        }
    } else{
        printf("Não atende os critérios de renda!");
    }
} else{
    printf("Não atende os critérios de idade!");
}
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                           
                                             //                              CÓDIGO 3

int numero;

//combinando os diferentes tipos de estruturas


printf("Digite um número: ");
scanf("%d",&numero);

    if(numero > 0){
        if (numero % 2 == 0)
        {
            printf("O número é par");
           
        } else {
            printf("Número impar");
        }
        
    } else if (numero == 0){
        printf("O número é zero.");
    }
    else
    printf("O número é negativo."); */


return 0;
}
