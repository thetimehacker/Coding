#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,k;
    cin>>m>>k;
    while(k!=0){
        int temp=m%10;
        if(temp<k){
            m/=10;
            k-=temp+1;
        }
        else{
            m=m-k;
            k=0;
        }
    }
    cout<<m;
}