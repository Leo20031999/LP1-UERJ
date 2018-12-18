#include <stdio.h>
#include <stdlib.h>
struct caixa{
	int valor;
	struct caixa* prox;
};
void exibe(struct caixa* caixa){
	while(caixa!=NULL){
		printf("%d->",caixa->valor);
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
	struct caixa c6;
	printf("Digite o elemento de c1:");
	scanf("%d",&c1.valor);
	c1.prox=&c2;
	printf("Digite o elemento de c2:");
	scanf("%d",&c2.valor);
	c2.prox=&c3;
	printf("Digite o elemento de c3:");
	scanf("%d",&c3.valor);
	c3.prox=&c4;
	printf("Digite o elemento de c4:");
	scanf("%d",&c4.valor);
	c4.prox=&c5;
	printf("Digite o elemento de c5:");
	scanf("%d",&c5.valor);
	c5.prox=&c6;
	printf("Digite o elemento de c6:");
	scanf("%d",&c6.valor);
	c6.prox=NULL;
	exibe(&c1);
	return 0;
}
