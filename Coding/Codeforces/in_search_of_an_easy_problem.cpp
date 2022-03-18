#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=true;
    while(n--){
        int temp;
        cin>>temp;
        if(temp==1)flag=false;
    }
    if(flag)cout<<"EASY";
    else cout<<"HARD";
}