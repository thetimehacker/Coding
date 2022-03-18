#include <bits/stdc++.h>
using namespace std;

// 1 8 2 9 3 10 4 11 5 12 6 13 7 14 
// 1 10 6 2 11 7 3 12 8 4 13 9 5 14 
// 1 12 10 8 6 4 2 13 11 9 7 5 3 14 

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,m;
		cin>>n>>m;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			v[i]=i+1;
		}
		while(m--){

			vector<int> a(n);
			int k=0;
			for(int i=0;i<n;i+=2,k++){
				a[k]=v[i];
			}
			for(int i=1;i<n;i+=2,k++){
				a[k]=v[i];
			}
		
			for(auto x:a)cout<<x<<" ";

			for(int i=0;i<n;i++){
				v[i]=a[i];
			}

		cout <<endl;
}
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

