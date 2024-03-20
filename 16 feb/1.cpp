#include<stdio.h>

int main(){
    lab:
    printf("First array");
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
        
    }
    printf("Second array");
    int r2,c2;

    
    scanf("%d %d",&r2,&c2);
     if (r!=r2 || c2!=c)
    {
        printf("Enter Correct Array");
        goto lab;
    }
    int arr2[r][c];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
        
    }
   
    
    printf("sum");
     printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int aa=arr[i][j]+arr2[i][j];
            printf("%d ",aa);
        }
        printf("\n");
        
    }
    
}