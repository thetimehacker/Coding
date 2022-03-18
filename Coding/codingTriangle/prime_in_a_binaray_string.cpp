#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		string s;
		cin>>s;
		bool result=false;
		for(int i=0;i<s.size()-1;i++){
			if(s[i]=='1')result=true;
		}
		if(result)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

int main() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    //Start from here
    
    sol();

}

