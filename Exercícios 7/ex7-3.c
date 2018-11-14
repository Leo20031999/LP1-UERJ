#include <stdio.h>
#include <math.h>
struct ponto{
	int x;
	int y;
};
void preenche(struct ponto* p){
	printf("Digite x: ");
	scanf("%i", &p->x);
	printf("Digite y: ");
	scanf("%i", &p->y);
}
void vetor(struct ponto* p){
	int i;
	for(i=0;i<10;i+=1){
		preenche(p+i);
	}
}
int distancia(struct ponto* p){
	int dist;
	int i,s;
	for (i=0;i<10;i+=1){
		dist=sqrt(((p+i)->x*(p+i)->x)+((p+i)->y*(p+i)->y));
		if(0<dist){
			s=i;
		}
	}
	return s;
}
int main(void){
	struct ponto pontos[10];
	int i;
	int z;
	vetor(pontos);
	z=distancia(pontos);
	printf("Ponto mais distante: (%i,%i)",pontos[z].x,pontos[z].y);
	return 0;
}
