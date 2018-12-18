#include <stdio.h>
#include <stdlib.h>
typedef struct caixa{
	int valor;
	struct caixa* prox;
}caixa;
int retira(struct caixa* t1, int n){
	caixa* t2;
	if(t1->valor==n){
		return 2;
	}
	while(t1->valor!=n){
		t2=t1;
		t2=t1->prox;
	}
	t2->prox=t1->prox;
	free(t1);
	return 1;
}
int contem(struct caixa* c, int n){
	caixa* t1;
	t1=c;
	while(c!=NULL){
		if(c->valor==n){
			int x=retira(t1,n);
			return x;
		}
		c=c->prox;
	}
	return 0;
}
void exibe(struct caixa* caixa){
	while(caixa!=NULL){
		printf("%d->",caixa->valor);
		caixa=caixa->prox;
	}
	printf("\n");
}
int main(void){
	caixa* cabeca;
	cabeca=NULL;
	int n;
	printf("Valor para n:");
	scanf("%d",&n);
	while(n!=-1){
		caixa* novo;
		novo=(caixa*) malloc(sizeof(caixa));
		novo->valor=n;
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
		printf("Outro valor:");
		scanf("%d",&n);
	}
	exibe(cabeca);
	printf("Escolha um numero para buscar:");
	scanf("%d",&n);
	int x=contem(cabeca,n);
	if(x==2){
		caixa* t3;
		t3=(caixa*)malloc(sizeof(caixa));
		t3=cabeca;
		cabeca=cabeca->prox;
		free(t3);
		printf("Valor encontrado\n");
		exibe(cabeca);
	}else if(x==1){
		printf("Valor encontrado e removido");
		exibe(cabeca);
	}else{
		printf("Nenhum valor removido");
	}
	return 0;
}
