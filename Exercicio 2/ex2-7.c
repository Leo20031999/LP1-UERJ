#include <stdio.h>
#include <string.h>
int main(void){
	char time[20], mais[20], menos[20];
	int i=1,vit,der,emp,pts,pmai=0,pmen=100;
	while(i<=20){
		printf("Nome do time %d:",i);
		scanf("%s",time);
		printf("Numero de vitorias:");
		scanf("%d",&vit);
		printf("Numero de empates:");
		scanf("%d",&emp);
		printf("Numero de derrotas:");
		scanf("%d",&der);
		pts=3*vit+emp;
		if(pts>pmai){
			pmai=pts;
			strcpy(mais,time);
		}else if(pts<pmen){
			pmen=pts;
			strcpy(menos,time);
		}
		i+=1;
	}
	printf("Time %s tem mais pontos.\n",mais);
	printf("Time %s tem menos pontos.\n",menos);
	return 0;
}
