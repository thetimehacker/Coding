#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		
		int count=1;
		
		for(int i=0;i<s.size()-1;i++){
			if(s[i]!=s[i+1])count++;
		}
		
		cout<<count<<endl;
	}	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}