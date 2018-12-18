#include <stdio.h>
#include <string.h>
typedef struct Pessoa{
	char nome[25];
	int idade;
}Pessoa;
int main(void){
    Pessoa pessoas[100];
	int n,i;
	FILE* f=fopen("ex8.bin","wb");
	printf("Quantidade de pessoas: ");
	scanf("%i",&n);
	fwrite(&n,sizeof(int),1,f);
	for(i=0;i<n;i+=1){
		printf("NOME: ");
		scanf("%s",pessoas[i].nome);
		printf("IDADE: ");
		scanf("%d",&pessoas[i].idade);
		fwrite(&pessoas[i],sizeof(struct Pessoa),1,f);
	}
	fclose(f);
	return 0;
}
	
