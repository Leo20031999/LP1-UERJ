#include <stdio.h>
int main(void){
	int a,b;
	int* p;
	printf("Digite um valor: ");
	scanf("%d", &a);
	printf("Digite outro: ");
	scanf("%d", &b);
	printf("%d %d\n", a,b);
	if (a>b){
		int *p=&a;
		*p=a-50;
	}else{
		int *p=&b;
		*p=b-50;
}
	printf("%d %d\n", a,b);
	return 0;
}
