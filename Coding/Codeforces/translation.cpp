#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"NO";
    }else{
        bool result=true;
        for(int i=0, j=a.size()-1;i<a.size();i++,j--){
            if(b[i]!=a[j]){
                result=false;
                break;
            }
        }
        if(result){
            cout<<"YES";
        }else cout<<"NO";
    }
}