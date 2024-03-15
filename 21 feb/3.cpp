#include<stdio.h>

void pri(int a[]){
    int x=sizeof(a)/sizeof(a[0]);
for (int i = 0; i <x ; i++)
{
   printf("%d",a[i]);
printf("\n");
}
printf("%d",x);

}
int main(){
    int a[]={564,56,89,564};
    pri(a);
}

