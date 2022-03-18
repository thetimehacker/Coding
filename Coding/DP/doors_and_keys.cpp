#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool r=false,g=false,b=false;
		bool result=true;
		
		map<char,bool> m;
		m['R']=false;
		m['G']=false;
		m['B']=false;
		
		for(auto x:s){
			if(x=='r')m['R']=true;
			else if(x=='g')m['G']=true;
			else if(x=='b')m['B']=true;
			else if(x=='R'){
				if(!m[x])result=false;
			}
			else if(x=='G'){
				if(!m[x])result=false;
			}
			else if(x=='B'){
				if(!m[x])result=false;
			}
		}
		if(result)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}