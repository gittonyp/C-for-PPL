#include<stdio.h>

int max(int a,int b){
if(a>b){
    return a;
}else{
    return b;
}
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",max(max(a,b),max(c,d)));
}

