#include<bits/stdc++.h>
using namespace std;

int rev(int n,int *m){
if(n==0){
    return 0;
}

int k=rev(n/10,m);

*m=(*m)*10;

return (n%10)**m+k; 



}


int main(){
    int a;
    cin>>a;
    int z=1;
    int *p=&z;
    cout<<rev(a,p)/10;

}
