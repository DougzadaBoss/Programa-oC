#include <stdio.h>
int main(){
int opcao;
int saldo = 1000;
printf("***ESCOLHA A OPÇÃO DESEJADA***\n\n\n");
printf("1. Verificar saldo.\n");
printf("2. Verificar depósito.\n");
printf("3. Fazer saque.\n");
scanf("%d",&opcao);

switch(opcao){

case 1:
printf("O seu saldo é: R$ %i\n", saldo);
break;

case 2:
printf("Digite o banco que você deseja depositar.\n");
printf("Digite a agência que você deseja depositar.\n");
printf("Digite a conte que você deseja depositar.\n");
break;

case 3:
printf("Digite o valor a sacar.");
break;

default:
printf("Opção inválida");
}



return 0;
}
