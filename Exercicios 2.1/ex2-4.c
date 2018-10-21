#include <stdio.h>
int main (void){
	int mph;
	printf("Digite a velovidade atual(mph): ");
	scanf("%i", &mph);
	int kmh=1.6*mph;
	if (kmh>100){
		printf("DESACELERE");
	}else if(kmh>80){
		printf("MANTENHA");
	}else{
		printf("ACELERE");
	}
	return 0;
}
