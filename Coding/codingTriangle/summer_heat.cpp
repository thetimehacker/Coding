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
    	int a,b,x,y;
    	cin>>a>>b>>x>>y;
    	cout<<(x/a)+(y/b)<<endl;
    }
}
