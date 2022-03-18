#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int l=0;
    int r=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=97)l++;
        else r++;
    }
    if(l>=r){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    
}