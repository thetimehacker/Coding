#include <bits/stdc++.h>
using namespace std;

// set<string> v; //for strings
set<int> v;//for integers
void subset(string s,int n){
	if(n==-1)return;
	else
	{
		for(int i=0;i<n;i++){
			stringstream ss(s.substr(i,n-i));
			int temp;
			ss>>temp;
			v.insert(temp);
		}
		subset(s,n-1);
	}
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		subset(s,s.size());
		//printing the subsets
		for(auto x:v)cout<<x<<endl;
			cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}