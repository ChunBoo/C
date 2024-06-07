#include<stdlib.h>
#include<stdio.h>


void foo(){
    int a[5]={1,2,3,4,5};
    // int *p=(a+1);
    int *p=(&a+1);
    #if 0
    printf("a=%p\n",a);
    printf("&a=%p\n",&a);
    printf("a+1=%p\n",a+1);
    printf("&a+1=%p\n",&a+1);
    #endif
    printf("p=%x,*p=%d, *(p-1)=%d\n",p,*p,*(p-1));
}

int main(){
    foo();
    return 0;
}