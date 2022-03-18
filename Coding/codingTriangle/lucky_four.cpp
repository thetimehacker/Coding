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
    	string s;
    	cin>>s;
    	int count=0;
    	for(auto x:s)if(x=='4')count++;
    		cout<<count<<endl;
    }

}
