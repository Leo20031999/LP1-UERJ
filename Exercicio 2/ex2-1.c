#include <stdio.h>
int main(void){
    int n1,n2;
    printf("Digite um numero");
    scanf("%d",&n1);
    printf("Digite outro:");
    scanf("%d",&n2);
    for(int i=n1;i<n2;i+=1){
        printf("%d,", i);
        }
    return 0;
}
