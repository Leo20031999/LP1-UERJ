// ex 3
#include <stdio.h>

int main(void){
	int dolar;
	printf("digite o preço em dolar:");
	scanf("%d", &dolar);
	int reais=(dolar*3.17);
	printf("Preço em reais: %d\n", reais );
	if (reais<1000){
		printf("Bom negócio");
	}
	else{
		printf("Mau negocio");
	}
	return 0;
}
