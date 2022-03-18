#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		vector<char>v;
		for(int i=0;i<=s.size()-t.size();i++){
			string subs=s.substr(i,t.size());
			if(subs==t){
				if(i!=0){
					v.push_back(s[i-1]);
				}
				if(i+t.size()!=s.size()){
					v.push_back(s[i+t.size()]);
				}
			}
		}
		for(auto x:v)cout<<x;
			cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}