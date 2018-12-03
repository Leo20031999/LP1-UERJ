#include <stdio.h>
struct status{
	int ble;
	int poi;
	union{
		int mag;
		int fis;
	}dan;
};
struct personagem{
	int hp;
	int sta;
	int str;
	int xp;
	struct status s;
};
void preenche2(struct status* s, int esc){
	printf("Dano de sangramento: ");
	scanf("%i",&s->ble);
	printf("Dano de envenenamento ");
	scanf("%i",&s->poi);
	if (esc==1){
		printf("Redu�ao de poder magico: ");
		scanf("%i",&s->dan.mag);
	}
	if (esc==2){
		printf("Redu�ao de poder fisico: ");
		scanf("%i",&s->dan.fis);
	}
}
void preenche(struct personagem* p,int esc){
	printf("Digite a vida: ");
	scanf("%i",&p->hp);
	printf("Digite a estamina: ");
	scanf("%i",&p->sta);
	printf("Digite a for�a: ");
	scanf("%i",&p->str);
	printf("Digite a experiencia: ");
	scanf("%i",&p->xp);
	preenche2(&p->s,esc);
}
int main (void){
	int esc;
	printf("Qual redu�ao do atributo do personagem: magico/fisico[1/2]?");
	scanf("%i",&esc);
	struct personagem p1;
	preenche(&p1,esc);
	printf("Status do personagem;\nVida:%i\nStamina:%i\nFor�a:%i\nExperiencia:%i\n",p1.hp,p1.sta,p1.str,p1.xp);
	printf("Status negativos;\nEnvenenamento:%i\nSangramento:%i\n",p1.s.poi,p1.s.ble);
	if (esc==1){
		printf("REDU�AO DE PODER MAGICO: %i",p1.s.dan.mag);
	}
	if(esc==2){
		printf("REDU�AO DE PODER FISICO: %i",p1.s.dan.fis);
	}
	return 0;
}
