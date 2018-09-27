#include <stdio.h>
int compra(int* conta, int valor){
	*conta=*conta-valor;
}
int main(void){
	int conta1, conta2;
	int minha_conta=0;
	int contatual;
	int *conta;
	int valor=500;
	printf("digite o saldo 1: ");
	scanf("%d", &conta1);
	printf("digite o saldo 2: ");
	scanf("%d", &conta2);
	minha_conta=conta1+conta2;
	printf("Conta 1: %d \nConta 2: %d\n", conta1, conta2);
	printf("Saldo total: %d\n", minha_conta);
	if(conta1>conta2){
		conta=&conta1;
		compra(conta,valor);
		contatual=conta1+conta2;
	}
	else{
		conta=&conta2;
		compra(conta,valor);
		contatual=conta1+conta2;
	}
	printf("Conta 1: %d \nConta 2: %d\n", conta1, conta2);
	printf("Saldo atual: %d", contatual);
	return 0;
}
