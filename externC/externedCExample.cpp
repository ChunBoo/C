#include "header.h"
#include <stdio.h>

void foo(int a1,int a2,int a3){
    printf("a1:%d,%p\n",a1,&a1);
    printf("a3:%d,%p\n",a3,&a3); 
}
int main(){
    int a[5]={1,2,3,4,5};
    // foo(a);
    foo(1,2,3);
    // printf("a[0]:%d,%p\n",a[0],&a[0]);
    // printf("a[4]:%d,%p\n",a[4],&a[4]);
    // printMessage();
    return 0;
}