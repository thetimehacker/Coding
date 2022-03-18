#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		vector <int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}

		sort(v.begin(), v.end());

		cout<<v[v.size()-1]-v[0]<<endl;


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

