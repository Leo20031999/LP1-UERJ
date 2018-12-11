#include <stdio.h>
int main(void){
	int vet[5],n=0,i;
	for(i=0;i<5;i+=1){
		printf("Digite um numero: ");
		scanf("%d",&vet[i]);
	}
	for(i=0;i<5;i+=1){
		printf("%d, ",vet[i]);
		n+=1;
	}
	printf("\n");
	int I;
	printf("Qual indice deseja retirar?");
	scanf("%d",&I);
	n-=1;
	for(i=I;i<n;i+=1){
		vet[i]=vet[i+1];
	}
	for(i=0;i<n;i+=1){
		printf("%d, ",vet[i]);
	}
	return 0;
}
