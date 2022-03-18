#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from here
    int n,k;
    cin>>n>>k;
    int total=240-k;
    int count=0;
    for(int i=1;i<=n;i++){
    	total-=(5*i);
    	if(total<0)break;
    	else count++;
    }
    cout<<count;

}
