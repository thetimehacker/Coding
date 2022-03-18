#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    float sum=0;
    int m=n;
    while(m--){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    cout<<sum/n;
}