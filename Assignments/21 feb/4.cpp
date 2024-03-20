#include<stdio.h>

void facti(int a){

int z=1;
for (int i = 1; i <= a; i++)
{
    z=i*z;
}
printf("%d",z);
printf("\n");
return;
}
int main(){
    int a;
scanf("%d",&a);
    facti(a);
}

