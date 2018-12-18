#include <stdio.h>
#include <string.h>
typedef struct Pessoa{
	char nome[25];
	int idade;
}Pessoa;
int main(void){
	Pessoa pessoas[100];
	int n,j,i;
	FILE* f=fopen("/home/ime/ex8.bin","rb");
	fread(&n,sizeof(int),1,f);
	for(i=0;i<n;i++){
		fread(&pessoas[i],sizeof(struct Pessoa),1,f);
		pessoas[i].nome[25]='\0';
	}
	for(j=0;j<n;j+=1){
		printf("%d %s\n",pessoas[j].idade,pessoas[j].nome);
	}
	fclose(f);
	return 0;
}
