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
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0){
    	if((float)x+0.50<=y){
    		y=y-(float)x-0.50;
    	}
    }
    cout<<fixed<<setprecision(2)<<y;
}
