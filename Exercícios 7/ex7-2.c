#include <stdio.h>
struct status{
	int poi;
	int ble;
	int burn;
};
struct personagem{
	int hp;
	int sta;
	int str;
	int xp;
	struct status s;
};
void preenche2(struct status* s){
	printf("Digite o dano de envenenamento: ");
	scanf("%i", &s->poi);
	printf("Digite o dano de sangramento: ");
	scanf("%i", &s->ble);
	printf("Digite o dano de queimadura: ");
	scanf("%i", &s->burn);
}
void preenche(struct personagem* p){
	printf("Digite a vida: ");
	scanf("%i",&p->hp);
	printf("Digite a estamina: ");
	scanf("%i",&p->sta);
	printf("Digite a força: ");
	scanf("%i",&p->str);
	printf("Digite a experiencia: ");
	scanf("%i",&p->xp);
	preenche2(&p->s);
}
int main (void){
	struct personagem p1;
	preenche(&p1);
	printf("Status do personagem;\nVida:%i\nStamina:%i\nForça:%i\nExperiencia:%i\n",p1.hp,p1.sta,p1.str,p1.xp);
	printf("Status negativos;\nEnvenenamento:%i\nSangramento:%i\nQueimadura:%i",p1.s.poi,p1.s.ble,p1.s.burn);
	return 0;
}
