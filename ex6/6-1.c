#include <stdio.h>
int preenche(int* vec, int n){
	int i;
	for(i=0;i<n;i+=1){
		printf("Digite um valor: ");
		scanf("%d",vec+i);
	}
}
float media(int* vec, int n){
	int i;
	float soma, med;
	for(i=0;i<n;i+=1){
		soma+=*(vec+i);
	}
	med=(soma/n);
	return med;
}
int main(void){
	int n;
	int vec[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	int x=preenche(vec,n);
	float y=media(vec,n);
	printf("Media:%f ", y);
	return 0;
}
