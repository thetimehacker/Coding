#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int anton=0,danik=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A')anton++;
        else danik++;
    }
    if(anton==danik)cout<<"Friendship";
    else if(anton>danik)cout<<"Anton";
    else cout<<"Danik";
}