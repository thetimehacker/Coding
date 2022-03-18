#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)cin>>v[i];

		sort(v.begin(), v.end(),greater<int>());

		vector<int> b;

		for(int i=1;i<n;i++){
			b.push_back(v[0]&v[i]);
		}

		int save=b[0];
		for(int i=1;i<b.size();i++){
			//cout<<save<<"|"<<b[i]<<" = "<<(save|b[i])<<endl;
			save=save|b[i];
		}

		cout<<save<<endl;
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

