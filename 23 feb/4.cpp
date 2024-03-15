#include<stdio.h>

int num(int n){
if(n==0){
    return 1;
}
int z=(n%10);

return num(n/10)*z;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",num(n));

}

