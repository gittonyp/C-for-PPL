#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
    int n;
    cin>>n;
    int arr[n];

   for (int i = 0; i < n; i++)
   { 
    

    cin>>arr[i];
    
    
      }

for (int i = 0; i < n; i++)
{
    if(arr[0]!=arr[i]){
        if(arr[0]==arr[1]){
            cout<<i+1;
            cout<<endl;
            break;
        }else{
           if(arr[2]==arr[0]){
            cout<<i+1;
            cout<<endl;
            break;
           } else{
            cout<<1;
            cout<<endl;
            break;
           }
        }
    }

   
   
} 
   t--;

}}