#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;

		vector<string> v(n+1);
		map<string, int> m;
		for(int i=0;i<=n;i++){
			getline(cin,v[i]);
			// cout<<v[i]<<endl;
			istringstream ss(v[i]);
			string temp;
			ss>>temp;
			m[temp]++;
		}
		//output the frequency
		// for(auto [x,y]:m)cout<<x<<" "<<y<<endl;

		//output the vector
		// for(auto x: v)cout<<x<<endl;

		for(int i=1;i<=n;i++){
			istringstream ss(v[i]);
			string temp;
			ss>>temp;//storing first word
			if(m[temp]>1)cout<<v[i]<<endl;
			else cout<<temp<<endl;
		}
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}