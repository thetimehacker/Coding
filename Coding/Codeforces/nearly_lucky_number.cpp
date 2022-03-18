#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    
    string c=to_string(count);
    int result=true;
    for(int i=0;i<c.size();i++){
        if(c[i]=='4' || c[i]=='7'){
            
        }else{
            result=false;
            break;
        }
    }
    if(result)cout<<"YES";
    else cout<<"NO";
}