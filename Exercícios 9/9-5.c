#include <stdio.h>
#include <stdlib.h>
typedef struct caixa{
	int val;
	struct caixa* prox;
}caixa;
void exibe(struct caixa* caixa){
	while(caixa!=NULL){
		printf("%d->",caixa->val);
		caixa=caixa->prox;
	}
	printf("\n");
}
int main(void){
	caixa* cabeca;
	cabeca=NULL;
	int n;
	printf("Outro valor: ");
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
	exibe(cabeca);
	return 0;
}
