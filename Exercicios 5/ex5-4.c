#include <stdio.h>
int troca(int* p1, int* p2){
	int pont;
	pont=*p1;
	*p1=*p2;
	*p2=pont;
}
int main(void){
	int x=10, y=20;
	printf("X: %d, Y:%d\n", x, y);
	int z=troca(&x,&y);
	printf("Trocando...\n");
	printf("X: %d Y: %d\n", x, y);
	return 0;
}
