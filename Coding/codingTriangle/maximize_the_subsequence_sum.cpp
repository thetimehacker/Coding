#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		//we will choose that subsequence which has max number of negative numbers
		int n,k;
		cin>>n>>k;
		vector <int> v(n);
		for(int i=0;i<n;i++)cin>>v[i];

		sort(v.begin(), v.end());
		int positivesum=0;int newsum=0;
		for(int i=0;i<n;i++){
			if(k>0){
				if(v[i]<0)
				newsum+=abs(v[i]);
				else positivesum+=v[i];
				k--;
			}
			else if(v[i]>0){
				newsum+=v[i];
				positivesum+=v[i];
			}

		}

		if(positivesum>newsum && positivesum>0)cout<<positivesum;
		else if(newsum>0)cout<<newsum;
		else cout<<0;
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

