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
    	int n,a,b;
    	cin>>n>>a>>b;

    	cout<<(360+n*2)-(a+b)<<endl;
    	//there are total 360 + n*2 seconds and (a+b) time has passed
    }
}
