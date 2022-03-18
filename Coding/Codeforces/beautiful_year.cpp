#include<iostream>
using namespace std;
int main()
{
    //we will be given with a distinct number
    //we have to find a number bigger than that
    int n;
    cin>>n;
    
    bool flag=true;
    while(flag){
        n++;
        string s=to_string(n);
        bool x=true;
        for(int i=0;i<s.size()-1;i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    x=false;
                    break;
                }
            }
            if(!x)break;
        }
        if(x)flag=false;
    }
    cout<<n;
    
}