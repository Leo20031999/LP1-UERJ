#include <stdio.h>
#include <string.h>
int strlen2(char* str){
	int i=0;
	while(1){
		if(*(str+i)=='\0'){
			break;
		}
		i+=1;
	}
	return i;
}
int main(void){
	char string[20];
	printf("Escreva alguma coisa: ");
	scanf("%s",string);
	int z=strlen2(string);
	printf("Tamanho: %d",z);
	return 0;
}
