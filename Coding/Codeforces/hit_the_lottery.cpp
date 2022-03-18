#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int a[5]={100,20,10,5,1};
    int count=0;
    for(int i=0;i<5;){
        if(n==0){
            break;
        }
        else{
            if(n>=a[i]){
                n-=a[i];
                count++;
            }else i++;
        }
    }
    cout<<count;

}