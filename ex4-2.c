#include <stdio.h>
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
	int max;
	printf("Digite um número: ");
	scanf("%d", &max);
	int x=todos_os_primos(max);
	return 0;
}
