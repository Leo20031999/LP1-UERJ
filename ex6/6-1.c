#include <stdio.h>
int preenche(int* vec, int n){
	int i;
	for(i=0;i<n;i+=1){
		printf("Digite um valor: ");
		scanf("%d",vec+i);
	}
}
int media(int* vec, int n){
	int i;
	float soma, media;
	for(i=0;i<n;i+=1){
		soma+=*(vec+i);
	}
	media=(soma/n);
	printf("Media:%f ", media);
}
int main(void){
	int n;
	int vec[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	int x=preenche(vec,n);
	int y=media(vec,n);
	return 0;
}
