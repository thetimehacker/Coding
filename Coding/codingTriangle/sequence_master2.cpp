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


		vector<int> b((2*pow(10,5)),-1);
		//initialized every element with 0 

		vector<int> a(n);
		a[0]=1;
		//starting from index 1
		for(int i=1;i<n;i++){
			if(b[v[i]]>-1){
				//cout<<"b[v[i]] = "<<b[v[i]]<<endl;
				a[i]=a[i-1] + (i-b[v[i]]);
			}
			else{
				a[i]=a[i-1]+i+1;
			}
			//cout<<"a[i] = "<<a[i]<<endl;
			b[v[i]]=i;
		}

		int sum=0;
		vector <int> c(n);
		for(int i=0;i<n;i++){
			if(i==0)c[i]=a[i];
			else c[i]=a[i]+c[i-1];
		}


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
				

				//add the values of the vector and output
				// int sum=0;
				// for(int i=0;i<k;i++)sum+=a[i];
				cout<<c[k-1]<<endl;


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

