#include <stdio.h>
struct caixa{
    int valor;
    struct caixa* prox;
};
int main (void){
    struct caixa c1,c2,c3,c4,c5;
    struct caixa* lista=&c1;
    printf("Elemento:");
    scanf("%d",&c1.valor);
    c1.prox=&c2;
    printf("Elemento:");
    scanf("%d",&c2.valor);
    c2.prox=&c3;
    printf("Elemento:");
    scanf("%d",&c3.valor);
    c3.prox=&c4;
    printf("Elemento:");
    scanf("%d",&c4.valor);
    c4.prox=&c5;
    printf("Elemento:");
    scanf("%d",&c5.valor);
    c5.prox=NULL;
    printf("%d->%d->%d->%d->%d\n",lista->valor,(c1.prox)->valor,(c2.prox)->valor,(c3.prox)->valor,(c4.prox)->valor);
    return 0;
}
