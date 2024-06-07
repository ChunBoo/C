#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char **a,char **b){
    char *tmp=*a;
    *a=*b;
    *b=tmp;
}


void sort(char *s[],int len){
    for(int i=0;i<len;i++){
        int minPos=0;
        char *minS=s[i];
        for(int j=i+1;j<len;j++){
            if(strcmp(minS,s[j])>0){
                minPos=j;
                minS=s[j];
            }            
        }
        swap(&s[i],&s[minPos]);
    }
}
void printStr(int *s[],int len){
    for(int i=0;i<len;i++){
        printf("%s\n",s[i]);
    }
}
int main(){
    int len=4;
    char *s[]={"cc","aa","dd","bb"};
    // printStr(s,len);
    sort(s,len);
    printStr(s,len);
}