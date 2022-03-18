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
    	int rd1,rd2,x,y,z;
    	cin>>rd1>>x>>y>>z;
    	rd2=7-rd1;
    	if((x*7)>(y*rd1+z*rd2)){
    		cout<<(x*7)<<"\n";
    	}else cout<<(y*rd1+z*rd2)<<"\n";
    }

}
