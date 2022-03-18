#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int addition =a+c;
        int multiplication=2*b;
        int result=abs(addition-multiplication);
        int r1=result%3;
        int r2=r1-3;
        if(r1<abs(r2))cout<<r1<<endl;
        else cout<<abs(r2)<<endl;
    }
    
}