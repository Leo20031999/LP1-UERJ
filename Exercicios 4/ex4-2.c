#include <stdio.h>
int eh_primo(int n){
	int qtd, i;
	for(i=1;i<=n;i+=1){
		if(n%i==0){
			qtd+=1;
			}
    }if(qtd==2){
        return 1;
    }else{
        return 0;
    }
}
int todos_os_primos(int max){
	int i,qtd=0;
	while (max>0){
		for(i=1;i<=max;i+=1){
			if (max%i==0){
				qtd+=1;
			}
		}if(qtd==2){
			printf("%d\n",max);
		}
		max--;
		qtd=0;
	}
}
int main(void){
	int n;
	int max;
	printf("Digite um número: ");
	scanf("%d", &max);
	int x=todos_os_primos(max);
	int y=eh_primo(n);
	for (n=1;n<max;n+=1){
		if (eh_primo(n)==1){
    		printf("%d", n);
		}
	}
	return 0;
}
