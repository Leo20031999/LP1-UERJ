// ex 2
#include <stdio.h>
int main (void){
	int num1;
	int num2;
	printf("Escolha um numero: ");
	scanf("%d", &num1);
	printf("Escolha outro numero:");
	scanf("%d", &num2);
	if (num1 > num2) {
		printf("O maior numero é %d", num1);
	}else{
		printf("O maior numero é %d", num2);
	}
	return 0;
}
