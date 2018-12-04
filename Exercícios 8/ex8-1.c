#include <stdio.h>
#include <string.h>
int main(void){
	int i=0;
	char string[25];
	FILE* f=fopen("/home/ime/arq-01.txt","w");
	printf("Digite algo: ");
	scanf("%s", string);
	int x=strlen(string);
	for(i=0;i<x;i+=1){
		fputc(string[i],f);
	}
	fclose(f);
	return 0;
}
	
