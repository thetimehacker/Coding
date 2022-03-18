#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		map<int, int> m;
		int n,target;
		cin>>n>>target;

		for(int i=1;i<=n;i++){
			int temp;
			cin>>temp;
			m[temp]=i;
		}

		//traversing map
		for(auto x:m){
			cout<<x.first<<" "<<x.second<<endl;
		}

		vector<int> v(2);

		for(auto x:m){

			if(m[target-x.first]!=0 && m[target-x.first]!=x.second){
				cout<<"target = "<<target<<" x.first "<<x.first<<" target-x.first "<<target-x.first;
				cout<<" m[target-x.first] "<<m[target-x.first]<<endl;
				v[0]=x.second;
				v[1]=m[target-x.first];
				break;
			}
		}

		for(auto x:v)cout<<x<<" ";


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

