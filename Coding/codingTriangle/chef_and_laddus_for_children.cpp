#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,k;
		vector<int> v(n);
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>v[i];
		sort(v.begin(), v.end());

		//for(int i=0;i<v.size();i++)cout<<v[i]<<" "<<endl;
		vector<int> a;
		for(int i=0;i<n-k+1;i++){
			a.push_back(v[i+k-1]-v[i]);
		}
		sort(a.begin(), a.end());

		//for(int i=0;i<a.size();i++)cout<<a[i]<<" "<<endl;
		cout<<a[0]<<endl;
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

