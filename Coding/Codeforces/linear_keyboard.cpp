#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,s;
        cin>>a>>s;
        int sum=0;
        int position=-1;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<a.size();j++){
                if(s[i]==a[j]){
                    if(position!=-1)
                    sum+=abs(position-j);
                    position=j;
                }
            }
        }
        cout<<sum<<endl;
    }
    
}