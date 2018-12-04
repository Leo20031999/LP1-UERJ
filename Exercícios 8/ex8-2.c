#include <stdio.h>
#include <string.h>
int main(void){
    int i=0;
    char string[25];
    FILE* f=fopen("/home/ime/arq-01.txt","r");
    string[i]=fgetc(f);
    while (string[i]!=EOF){
        i+=1;
        string[i]=fgetc(f);
    }
    string[i]='\0';
    fclose(f);
    printf("%s",string);
    return 0;
}
