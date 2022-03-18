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
    int t;
    cin>>t;
    while(t--){
    	int a,b;
    	cin>>a>>b;
    	if(a%b==0)cout<<0<<"\n";
    	else cout<<b-(a%b)<<"\n";
    }

}
