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
        int result=addition-multiplication;
        if(addition<multiplication){
        while(addition<multiplication){
            addition++;
            multiplication-=2;
            
            if(abs(addition-multiplication)<abs(result))
            result=addition-multiplication;
        }}else if(addition>multiplication){
        while(addition>multiplication){
            addition--;
            multiplication+=2;
            
            if(abs(addition-multiplication)<abs(result))
            result=addition-multiplication;
        }}
        cout<<result<<endl;
    }
    
}