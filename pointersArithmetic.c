#include<stdlib.h>
#include<stdio.h>


int main(){
    int arr[3]={1,2,3};
    int* intPtr=&arr[0];
    char* charPtr=(char*) intPtr;
    printf("1-intPtr=%p\n",intPtr);
    intPtr+=1;
    printf("2-intPtr=%p,val=%d\n",intPtr,*intPtr);

    intPtr+=2;
    printf("3-intPtr=%p,val=%d\n",intPtr,*intPtr);

    printf("11-charPtr=%p,val=%d\n",charPtr,*charPtr);

    charPtr+=1;
    printf("22-charPtr=%p,val=%d\n",charPtr,*charPtr);

    charPtr+=3;
    printf("22-charPtr=%p,val=%d\n",charPtr,*charPtr);

    
}