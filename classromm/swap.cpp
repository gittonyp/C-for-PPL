#include<stdio.h>

void swap(int *n,int *p){
    int t=(*n);
    *n=*p;
    *p=t;
    return;
}

 
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("\n");
printf("%d %d",a,b);
swap(&a,&b);
printf("\n");
printf("%d %d",a,b);









}