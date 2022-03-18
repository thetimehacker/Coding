#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
    int n,m;
    cin>>n>>m;
    int i=1;
    while(1){
        if((n*pow(3,i))>m*pow(2,i)){
            break;
        }
        else i++;
    }
    cout<<i;
}