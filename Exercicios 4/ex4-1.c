#include <stdio.h>
int eh_primo(int n){
	int qtd, i;
	for(i=1;i<n;i+=1){
		if(n%i==0){
			qtd+=1;
		}
    }
    if (qtd==2){
    	return 1;
	}else{
		return 0;
	}
}
int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int x=eh_primo(n);
    if (x==0){
    	printf("primo.");
	}else{
		printf("nao e primo.");
	}
    return 0;
}
