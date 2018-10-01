#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
	int n;
    int i=0;
    int q=0;
	int soma=0;
	printf("digite um valor:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1){
		q=i*i;
		soma+=q;
    }
	printf("Soma:%d ",soma);
	return 0;
} 
