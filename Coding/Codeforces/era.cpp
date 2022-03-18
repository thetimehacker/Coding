#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(a[i]>i+count)
            count+=(a[i]-i-count);
        }
        cout<<count<<endl;
    }
    
}