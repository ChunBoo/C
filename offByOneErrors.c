#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    char a[16];
    char b[16];
    strncpy(a,"0123456789abcdef",sizeof(a)-1);
    strncpy(b,"0123456789abcdef",sizeof(b)-1);
    printf("a:%s\n",a);
    printf("b:%s\n",b);
}
