#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n,amt;
		cin>>n>>amt;
		vector<int> v(n);
		for(int i=0;i<n;i++)cin>>v[i];
		sort(v.begin(), v.end(),greater<int>());
		int sum=0;
		bool flag=false;
		int count=0;
		for(auto x:v){
			sum+=x;
			count++;
			if(sum>=amt){
				flag=true;
				break;
			}
		}
		if(flag)cout<<count;
		else cout<<-1;
		cout<<endl;
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

