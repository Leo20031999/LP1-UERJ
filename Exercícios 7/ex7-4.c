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
int main(void){
	struct pers per[10];
	int i;
	for (i=0;i<10;i+=1){
		preenche2(&per[i]);
	}
	return 0;
}
