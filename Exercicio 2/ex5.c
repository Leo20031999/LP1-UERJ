// ex 5
#include <stdio.h>
int main (void){
	int soma=0;
	int num;
	while(num!=0){
		printf("Digite um numero");
		scanf("%d", &num);
		soma+=num;
	}
	printf("%d\n", soma);
	return 0;
}
