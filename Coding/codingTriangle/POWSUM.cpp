#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//Start solution from here
		int n;
		cin>>n;
		vector<long long> v(n);
		long long sum=0;
		int smallest=-1;
		int index=-1;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
			if(smallest==-1){
				smallest=v[i];
				index=i+1;
			}
			else if(v[i]<smallest){
				smallest=v[i];
				index=i+1;
			}
		}

		if(pow(2,(int)log2(sum))!=sum){
			int diff=pow(2,(int)log2(sum)+1)-sum;
			
			//find smallest number.
			diff+=smallest;

			cout<<1<<endl;
			cout<<1<<" "<<diff/smallest<<endl;
			cout<<index;
		}
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

