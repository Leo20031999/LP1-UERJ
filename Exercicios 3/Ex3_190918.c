#include <stdio.h>
#include <stdlib.h>
int main(void){
	char temps[50];
	float media;
	int temp,i,soma=0,qtd=0;
	for (i=0; i<50; i++){
		printf("Digite a temperatura: ");
		scanf("%d", &temp);
		temps[i]=temp;
		if(temp<(-100)||(temp>100)){
			printf("Temperatura invalida");
			i-=1;
		}else{
			temps[i]=temp;
			soma=soma+temp;
		}
	}
	media=soma/50;
	for(i=0;i<3;i++){
		if(temps[i]>media){
			qtd+=1;
		}
	}
	printf("Media: %f\n", media);
	printf("%d temperaturas estão acima da média", qtd);
	return 0;
}
