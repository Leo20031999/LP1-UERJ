#include <stdio.h>
int main(void){
    int n1,n2;
    printf("Digite um numero");
    scanf("%d",&n1);
    printf("Digite outro:");
    scanf("%d",&n2);
	if (n2>n1){
		while(n1<n2){
			printf("%d\n", n1);
			n1+=1;
		}
	}else if(n1>n2){
		while(n2<n1){
			printf("%d\n", n2);
			n2+=1;
		}
	}else{
    	printf("Valores iguais");
	}
    return 0;
}
