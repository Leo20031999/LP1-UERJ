#include <stdio.h>
#include <math.h>
typedef struct armazenar{
	int x;
	int y;
}ponto;
ponto preenche(int x, int y){
	ponto p;
	p.x=x;
	p.y=y;
	return p;
}
void vec(ponto vetor[]){
	int x,y;
	int i;
	ponto valor;
	for(i=0;i<10;i+=1){
		printf("Escreva o ponto x: ");
		scanf("%d", &x);
		printf("Escreva o ponto y: ");
		scanf("%d", &y);
		valor=preenche(x,y);
		vetor[i]=valor;
	}
}
int dist(ponto vetor[]){
	int i;
	double mai=0;
	double distant;
	ponto distancia;
	for (i=0;i<10;i+=1){
		distant=0;
		distant=sqrt(pow(vetor[i].x,2)+pow(vetor[i].y,2));
		if(distant>mai){
			mai=distant;
			distancia.x=vetor[i].x;
			distancia.y=vetor[i].y;
		}
	}
	printf("Ponto mais distante da origem do plano: P(%d,%d)",distancia.x,distancia.y);
}
int main(void){
	ponto vetor[10];
	ponto pt;
	pt=preenche(0,0);
	vec(vetor);
	int z=dist(vetor);
	return 0;
}
