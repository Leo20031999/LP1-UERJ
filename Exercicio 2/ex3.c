// ex 3
#include <stdio.h>

int main(void){
	int dolar;
	printf("digite o pre�o em dolar:");
	scanf("%d", &dolar);
	int reais=(dolar*3.17);
	printf("Pre�o em reais: %d\n", reais );
	if (reais<1000){
		printf("Bom neg�cio");
	}
	else{
		printf("Mau negocio");
	}
	return 0;
}
