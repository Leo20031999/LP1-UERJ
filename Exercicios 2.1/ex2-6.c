#include <stdio.h>
#include <math.h>
int main(void){
	int n;
	int soma=0;
	int i=1;
	printf("Digite um numero");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		soma+=pow(i,2);
	}
	printf("%d",soma);
	return 0;
}
