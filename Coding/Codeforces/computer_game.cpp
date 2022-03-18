#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(i==n-1){
                if(b[i]=='1'){
                    flag=false;
                    break;
                }
            }
            else{
                if(b[i]=='1' && a[i]=='1'){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    
}