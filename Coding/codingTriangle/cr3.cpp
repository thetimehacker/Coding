#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		
		vector<int> v(n);
		int sum=0;
		
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(i<k)sum+=v[i];
		}
		
		// cout<<"sum : "<<sum<<endl;
		
		int maxx=sum;
		for(int i=k,j=0;i<n;i++,j++){
			int newsum=sum-v[j]+v[i];
			if(newsum>maxx)maxx=newsum;
			sum=newsum;
			// cout<<"sum : "<<sum<<endl;
		}
		cout<<maxx<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}