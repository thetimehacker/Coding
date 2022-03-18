#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> v1(n),v2(n);
		for(auto &x:v1)cin>>x;
		for(auto &x:v2)cin>>x;
		bool a=false,b=false,c=false,d=false;
		ll la,lb,lc,ld;
		int min=INT_MAX;
		long long result=0;
		for(int i=0;i<n;i++){
			if(abs(v1[0]-v2[i])<min){
				min=abs(v1[0]-v2[i]);
				la=i;
			}
		}
		result+=min;
		// cout<<result<<" ";
		min=INT_MAX;
		for(int i=n-1;i>=0;i--){
			if(abs(v1[n-1]-v2[i])<min){
				min=abs(v1[n-1]-v2[i]);
				lb=i;
			}
		}
		result+=min;
		// cout<<result<<" ";
		
		min=INT_MAX;
		if(la!=0 && lb!=0){
			for(int i=0;i<n;i++){
				if(abs(v2[0]-v1[i])<min){
					min=abs(v2[0]-v1[i]);
					// lc=i;
				}
			}
			result+=min;
		}
		
		// cout<<result<<" ";
		min=INT_MAX;
		if(la!=n-1 && lb!=n-1){
			for(int i=n-1;i>=0;i--){
				if(abs(v2[n-1]-v1[i])<min){
					min=abs(v2[n-1]-v1[i]);
					// lc=i;
				}
			}
			result+=min;
		}
		// cout<<result<<" ";
		cout<<result<<endl;
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}	