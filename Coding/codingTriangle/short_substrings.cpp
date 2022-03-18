#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<s[0];
		for(int i=1;i<s.size()-1;i+=2){
			cout<<s[i];
		}
		cout<<s[s.size()-1];
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}