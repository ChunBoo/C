#include<stdlib.h>
#include<stdio.h>

void foo(){
    int *ptr=NULL;
    free(ptr);
}

int main(){
    foo();
    return 0;
}