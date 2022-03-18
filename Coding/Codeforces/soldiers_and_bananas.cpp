#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
    int k,n,w;
    cin>>k>>n>>w;
    int sum=(k*((w*(w+1))/2)-n);
    if(sum<=0)cout<<0;
    else cout<<sum;
}