#include <stdio.h>
#include <string.h>
int compra(int* conta, int valor){
	*conta=*conta-valor;
}
int main(void){
	int compras[]={100,50,80,30,20};
	int conta1,conta2;
	int valor,i;
	int* conta;
	printf("Digite o saldo da conta 1:");
	scanf("%i", &conta1);
	printf("Digite o saldo da conta 2:");
	scanf("%i", &conta2);
	int minha_conta=conta1+conta2;
	printf("Saldo total: %d\n",minha_conta);
	for (i=0;i<5;i+=1){
		valor=compras[i];
		if(conta1>conta2){
			conta=&conta1;
			compra(conta,valor);
		}else{
			conta=&conta2;
			compra(conta,valor);
		}
	}
	int contatual=conta1+conta2;
	printf("Conta 1: %d\nConta 2:%d \n",conta1,conta2);
	printf("Saldo atual: %d\n", contatual);
	return 0;
}
