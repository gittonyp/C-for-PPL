#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==3){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b) cout<<c;
        else if(b==c) cout<<a;
        else cout<<b;

        cout<<endl;
       return 0;
    }
    int n1,n2;
    cin>>n1>>n2;
    for(int i=2;i<n;i++){
        int z;
        cin>>z;
        n1=n2;
        n2=z;
        if(n1!=z){
            cout<<z<<endl;
            return 0;
        }
    }
}