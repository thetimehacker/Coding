#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1; // 1 group will always exist
    string prev="";
    while(n--){
        string a;
        cin>>a;
        if(prev==""){
            prev=a; //count will not increase since prev=a
        }else{
            if(prev!=a){
                count++;
                prev=a;
                
            }
        }
    }
    cout<<count;
}