#include<stdio.h>

int num(int n){
if(n==0){
    return 0;
}


return 10*(n%10)+num(n/10);

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",num(n));

}

