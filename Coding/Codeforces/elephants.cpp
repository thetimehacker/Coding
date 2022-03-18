#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
    int n;
    cin>>n;
    int step=n;int j=1;
    for(int i=2;i<=5;i++){
        if(n/i<=step){
            step=n/i;
            j=i;
        }
    }
    if(n%j>0)step++;
    cout<<step;
    
}