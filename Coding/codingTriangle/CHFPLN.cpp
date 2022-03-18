#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		map<int,int> m;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(m[v[i]]==0)m[v[i]]=v[i]-1;
		}
		int count=0;
		for(auto x:v){
			if(m[x]>0){
				count++;
				m[x]--;
			}
		}
		cout<<count<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sol();

}