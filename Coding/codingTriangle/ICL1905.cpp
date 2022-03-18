#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,a;
		cin>>n>>a;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int t1,t2;
			cin>>t1>>t2;
			m[t2]=t1;
		}

		//sort
		// sort(m.begin(), m.end());
		for(auto [x,y]:m){
			cout<<y<<" "<<x<<endl;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}