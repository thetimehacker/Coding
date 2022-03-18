#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;cin>>n;
		string s;
		cin>>s;
		int none=0,nzero=0;
		for(auto x:s){
			if(x=='1')none++;
			else nzero++;
		}
		for(int i=0;i<nzero;i++)cout<<0;
		for(int i=0;i<none;i++)cout<<1;
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}