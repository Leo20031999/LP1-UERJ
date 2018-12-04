#include <stdio.h>
#include <string.h>
void escreva_string(FILE* f, char* string){
	int i=0;
	for(i=0;i<strlen(string);i+=1){
		fputc(string[i],f);
	}
}
int main(void){
	char s[25];
	int i,x;
	printf("Digite algo: ");
	scanf("%s",s);
	FILE* f=fopen("arquivo1.txt","w");
	escreva_string(f,s);
	return 0;
}
