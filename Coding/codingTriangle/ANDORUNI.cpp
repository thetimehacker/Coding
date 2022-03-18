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

		vector<int> b;

		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				cout<<v[i]<<"&"<<v[j]<<"="<<(v[i]&v[j])<<endl;
				b.push_back(v[i]&v[j]);
			}
		}

		cout<<endl;
		int save=-1;
		for(int i=1;i<b.size();i++){
			if(save==-1){
				cout<<b[i-1]<<"|"<<b[i]<<"="<<(b[i-1]|b[i])<<endl;
				save=b[i-1]|b[i];
			}
			else{
				cout<<save<<"|"<<b[i]<<"="<<(save|b[i])<<endl;
				save=save|b[i];
			}
		}
		cout<<endl<<endl;
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

