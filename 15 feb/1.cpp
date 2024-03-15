
#include<stdio.h>  
int main()  
{  
    int n, arr[n], i;  
    printf("Enter the size ");  
    scanf("%d", &n);  
    printf("Enter  ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
}  