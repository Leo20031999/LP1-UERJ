#include <stdio.h>
#include <stdlib.h>
void preenche(int l, int c, int arr[10][10]){
	int i,j;
	for(i=0;i<l;i+=1){
		for(j=0;j<c;j+=1){
			printf("Digite o numero");
			scanf("%d",&arr[i][j]);
		}
	}
}
float media(int l,int c,int arr[10][10]){
	int i,j;
	float soma=0,med=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			soma+=arr[i][j];
		}
	}
	med=soma/(l*c);
	return med;
}
int main(void){
	int l,c;
	float med;
	printf("Digite o numero de linhas: ");
	scanf("%d",&l);
	printf("Digite o numero de colunas: ");
	scanf("%d",&c);
	int arr[10][10];
	float soma=0;
	preenche(l,c,arr);
	float z=media(l,c,arr);
	printf("Media: %f", z);
	return 0;
}
