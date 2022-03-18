#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		//Start solution from here
		int n,q;
		cin>>n>>q;
		vector<int> v(n);
		for(int i=0;i<n;i++)cin>>v[i];

		//sort the array
		//sort(v.begin(), v.end(),greater<int>());

		for(int i=0;i<q;i++){
			int type, k , x, y;
			cin>>type;
			if(type==1){
				cin>>x>>y;
				//this is type 1 query so we will not process it
			}
			else{
				cin>>k;
				//this is type 2 query
				//from v[0] to v[k-1] find the sum 
				vector<int> b(k);
				for(int i=0;i<k;i++)b[i]=v[i];
				//sort b
				sort(b.begin(), b.end(),greater<int>());

				vector<int> a(k);
				a[0]=1;
				//starting from index 1
				for(int i=1;i<k;i++){
					if(b[i]==b[i-1]){
						a[i]=1+a[i-1];
					}
					else{
						a[i]=a[i-1]+i+1;
					}
				}

				//add the values of the vector and output
				int sum=0;
				for(auto x:a)sum+=x;
				cout<<sum<<endl;


			}
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

