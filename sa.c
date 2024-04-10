#include <stdio.h>
struct cus{
  int acn;
  char name[100];
  int post;
  int bal;
  int typ;
  int inter;
};

void printgold(struct cus* bank ,int n){
  while(n--){
    if(bank[n-1].bal>1000000){
      printf("%s \n",bank[n-1].name);
    }
  }
}
void printsilver(struct cus* bank ,int n){
  while(n--){
    if(bank[n-1].bal<1000000 && bank[n-1].bal>500000){
      printf("%s \n",bank[n-1].name);
    }
  }
}
void printgen(struct cus* bank ,int n){
  while(n--){
    if(bank[n-1].bal<500000){
      printf("%s \n",bank[n-1].name);
    }
  }
}
void internet(struct cus* bank ,int n){
  while(n--){
    if(bank[n-1].inter==1){
      printf("%s \n",bank[n-1].name);
    }
  }
}
void post(struct cus* bank ,int n,int postt){
  while(n--){
    if(bank[postt].post==postt){
      printf("%s \n",bank[n-1].name);
    }
  }
}



int main()
{
  int n;
  scanf("%d",&n);
  
    struct cus bank[n];
    for(int i=0;i<n;i++){
       printf("Enter Customer Data of Customer No %d\n",n+1);
       printf("Enter Customer ACCOUNT No  \n");
      scanf("%d",&bank[i].acn);
       printf("Enter Customer ACCOUNT Name \n");
      scanf("%s",bank[i].name);
      printf("Enter Customer ACCOUNT post NO \n");
      scanf("%d",&bank[i].post);
      printf("Enter Customer ACCOUNT BALANCE \n");
      scanf("%d",&bank[i].bal);
       printf("Enter Customer ACCOUNT TYPE \n");
      scanf("%d",&bank[i].typ);
      printf("Is internet facility is available \n");
      scanf("%d",&bank[i].inter);
     
    }
    bool run=true;
    while(run==true){
      printf("Select option \n");
       printf("1 Print Gold Member \n");
        printf("2 Print Silver Member \n");
         printf("3 Print General Member \n");
          printf("4 Print Customers Availing Internet Facility \n");
           printf("5 Customers by Postal code \n");
           printf("6Exit \n");
      scanf("%d",&n);
      switch(n){
        case 1:
          printgold(bank,n);
          break;
         case 2:
         printsilver(bank,n);break;
          case 3: 
          printgen(bank,n);break;
           case 4:
           internet(bank,n);
           break;
            case 5:
            int postt;
            scanf("%d",&postt);
           post(bank,n,postt);
           break;
            case 6: run=false;
                    break;
            
          
      }
    }
}