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
    	int p,m,v;
    	cin>>p>>m>>v;
    	cout<<(m*v)-(p-1)*v;
    	cout<<endl;
    }
}
