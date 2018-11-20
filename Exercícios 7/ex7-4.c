#include <stdio.h>
struct pos{
	int x;
	int y;
};
struct pers{
	int id;
	struct pos s;
	int score;
};
void preenche(struct pos* s){
	printf("Digite x: ");
	scanf("%i",&s->x);
	printf("Digite y: ");
	scanf("%i",&s->y);
}
void preenche2(struct pers* p){
	int i;
	printf("Numero do participante: ");
	scanf("%i", &p->id);
	preenche(&p->s);
	p->score=0;
}
void mapa(struct pers* p, int n){
	int y=0,x=0,e=0;
	printf(" 0123456789\n");
	for(y=0;y<10;y+=1){
		printf("%d",y);
		for(x=0;x<10;x+=1){
			for(e=0;e<n;e+=1){
				if((p+e)->s.y==y && (p+e)->s.x==x){
					printf("%d",(p+e)->id);
					break;
				}
				else if(e==(n-1)){
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
int main(void){
	struct pers per[10];
	int i;
	for (i=0;i<3;i+=1){
		preenche2(&per[i]);
	}
	mapa(per,10);
	return 0;
}
