#include<stdio.h>

void sqr(int *n){
    *n=(*n)*(*n);
    return;
}

int sqv(int n){
    return n*n;
}
int main(){
int a;
scanf("%d",&a);
printf("\n");
printf("%d",sqv(a));
printf("\n");
printf("%d",a);
printf("\n");
sqr(&a);
printf("\n");
printf("%d",a);
printf("\n");
printf("%d",a);








}