#include <stdio.h>
int eh_primo(int n){
	int qtd, i;
	for(i=1;i<=n;i+=1){
		if(n%i==0){
			qtd+=1;
			}
    }if(qtd==2){
        printf("Numero primo");
    }else{
        printf("não é primo");
    }
}
int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int x=eh_primo(n);
    return 0;
}

