#include <stdio.h>
#include <string.h>
struct linha{
	char materia[25];
	char dias[10];
};
struct ls{
	char ms[35];
};
int main(void){
	struct linha l;
	int mat,dias,i,j,k,a;
	FILE* f=fopen("dias.txt","w");
	printf("Quantas materias?");
	scanf("%i",&mat);
	for(i=0;i<mat;i+=1){
		printf("Materia:");
		scanf("%s",l.materia);
		for(k=0;k<strlen(l.materia);k+=1){
			fputc(l.materia[k],f);
		}
		fputc('-',f);
		printf("Quantos dias?");
		scanf("%i",&dias);
		for(j=0;j<dias;j+=1){
			printf("Dia:");
			scanf("%s",l.dias);
			for(a=0;a<strlen(l.dias);a+=1){
				fputc(l.dias[a],f);
			}
			fputc(',',f);
		}
		fputc('\n',f);
	}
	fclose(f);
	//agora leitura
	struct ls y;
	FILE *g=fopen("dias.txt","r");
	int q;
	y.ms[q]=fgetc(g);
	while(y.ms[q]!=EOF){
		q+=1;
		y.ms[q]=fgetc(g);
	}
	y.ms[q]='\0';
	printf("%s",y.ms);
	fclose(g);
	return 0;
}
