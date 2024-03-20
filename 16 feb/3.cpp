#include<stdio.h>

int main(){
   
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
   
   
    
    printf("Diagonal elements");
     printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {   
            if (i==j)
            {
                
            
            
            int aa=arr[i][j];
            printf("%d ",aa);}
        }
        printf("\n");
        
    }
    
}