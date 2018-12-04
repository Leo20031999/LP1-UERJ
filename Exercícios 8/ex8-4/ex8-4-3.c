#include <stdio.h>
#include <string.h>
void escreva_string(FILE* f, char* string){
	int i;
	for(i=0;i<strlen(string);i+=1){
		fputc(string[i],f);
	}
}
int main(void){
	int i;
	char s[10][25];
	FILE* f=fopen("arquivo3.txt","w");
	for(i=0;i<10;i+=1){
		printf("Digite algo:");
		scanf("%s",s[i]);
	}
	for(i=0;i<10;i+=1){
			escreva_string(f,s[i]);
			fputc(' ',f);
	}
	fclose(f);
	return 0;		
}
