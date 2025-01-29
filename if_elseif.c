#include <stdio.h>
int main(){
int idade;

//código para ensinar a utilizar o comando if e else if.

 //estrutura alinhada

 printf("Digite sua idade:");
 scanf("%d", &idade);
//Criança <12
//Adolescente 12 <= x 18
//adulto 18 <= x <60
//idoso > 60

 if (idade < 12 ){
    printf("Criança \n");
 }
 
 else if (idade >= 12 && idade < 18){
    printf("Adolescente");
 }
else if (idade >= 18 && idade < 60){

printf("Adulto");

}

else
printf("Idoso");



return 0;
}
