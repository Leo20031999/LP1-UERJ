#include <stdio.h>
#include <stdlib.h>
struct caixa{
	int val;
	struct caixa* prox;
};
void exibe(struct caixa* caixa){
	while(caixa!=NULL){
		printf("%d->",caixa->val);
		caixa=caixa->prox;
	}
	printf("\n");
}
int main(void){
	struct caixa c1;
	struct caixa c2;
	struct caixa c3;
	struct caixa c4;
	struct caixa c5;
	struct caixa* cabeca=&c1;
	printf("Digite o elemento de c1:");
	scanf("%d",&c1.val);
	c1.prox=&c2;
	printf("Digite o elemento de c2:");
	scanf("%d",&c2.val);
	c2.prox=&c3;
	printf("Digite o elemento de c3:");
	scanf("%d",&c3.val);
	c3.prox=&c4;
	printf("Digite o elemento de c4:");
	scanf("%d",&c4.val);
	c4.prox=&c5;
	printf("Digite o elemento de c5:");
	scanf("%d",&c5.val);
	c5.prox=NULL;
	exibe(cabeca);
	struct caixa* t1;
	t1=(*cabeca).prox;
	(*cabeca).prox=(*t1).prox;
	(*t1).prox=NULL;
	exibe(cabeca);
	(*t1).prox=cabeca;
	cabeca=t1;
	exibe(cabeca);
	return 0;
}
