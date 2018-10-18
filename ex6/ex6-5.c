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
void strjoin(char* d, char* o1, char* o2){
	int i,j, i1=strlen2(o1), i2=strlen2(o2);
	for (i=0;i<i1;i+=1){
		*(d+i)=*(o1+i);
	}
	for (j=i,i=0;j<(i2+i1);i+=1,j+=1){
		*(d+j)=*(o2+i);
	}
}
int main(void){
	char string1[20];
	printf("Digite alguma coisa: ");
	scanf("%s", string1);
	char string2[20];
	printf("Digite alguma coisa: ");
	scanf("%s", string2);
	char string3[40];
	strjoin(string3,string1,string2);
	printf("%s\n",string3);
	return 0;
}
