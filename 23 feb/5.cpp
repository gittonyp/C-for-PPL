#include<bits/stdc++.h>
using namespace std;

bool prime(int n,int z){
if(n==z){
    return true;
}
if(n%z==0){
return false;
}

return prime(n,z+1);
}


int main(){
    int a;
    cin>>a;
int z=2;
    cout<<prime(a,z);

}
