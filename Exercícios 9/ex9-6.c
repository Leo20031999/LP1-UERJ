#include <stdio.h>
#include <stdlib.h>
typedef struct caixa{
	int val;
	struct caixa* prox;
}caixa;
int contem(struct caixa* caixa,int n){
	while(caixa!=NULL){
		if(caixa->val=n){
			return 1;
		}
		caixa=caixa->prox;
	}
	return 0;
}
int main(void){
	caixa* cabeca,c1;
	cabeca=NULL;
	int n;
	printf("Valor : ");
	scanf("%d",&n);
	while(n!=-1){
		caixa* novo;
		novo=(caixa*) malloc(sizeof(caixa));
		novo->val=n;
		novo->prox=NULL;
		if(cabeca!=NULL){
			caixa* t1=cabeca;
			while(t1->prox!=NULL){
				t1=t1->prox;
			}
			t1->prox=novo;
		}else{
			cabeca=novo;
		}
		printf("Outro valor: ");
		scanf("%d",&n);
	}
	printf("Escolha o numero a buscar:\n");
	scanf("%d",&n);
	int x=contem(cabeca,n);
	printf("%d",x);
	return 0;
}
