#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<string,int> m;
		for(int i=0;i<3*n;i++){

			int temp;
			string s;
			cin>>s>>temp;
			m[s]+=temp;

		}
		vector<int> v;
		for(auto [x,y]:m){
			v.push_back(y);
		}
		sort(v.begin(), v.end());
		for(auto x: v)cout<<x<<" ";
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}