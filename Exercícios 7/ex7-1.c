#include <stdio.h>
struct personagem{
	int hp;
	int sta;
	int str;
	int xp;
};
void preenche(struct personagem* p){
	printf("Digite a vida: ");
	scanf("%i",&p->hp);
	printf("Digite a estamina: ");
	scanf("%i",&p->sta);
	printf("Digite a força: ");
	scanf("%i",&p->str);
	printf("Digite a experiencia: ");
	scanf("%i",&p->xp);
}
int main (void){
	struct personagem p1;
	preenche(&p1);
	printf("Status do personagem;\nVida:%i\nStamina:%i\nForça:\nExperiencia:%i",p1.hp,p1.sta,p1.str,p1.xp);
	return 0;
}
