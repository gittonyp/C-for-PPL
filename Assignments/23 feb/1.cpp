#include<stdio.h>

int facti(int n,int a[]){
if(a[n]!=0){
    return n*a[n];
}

int nn=facti(n-1,a);
a[n-1]=nn;

return n*nn;

}
int main(){
    int n;
    int a[12]={1,1,0,0,0,0,0,0,0,0,0,0};
    scanf("%d",&n);
    int z=facti(n,a);
    printf("%d",z);

}

