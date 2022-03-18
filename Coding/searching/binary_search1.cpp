#include <bits/stdc++.h>
using namespace std;
//recursion is using stack memory
/*bool binarysearch(vector<int> v,int l,int r, int X ){
	if(l>r)return 0;
	if(X==v[(l+r)/2])return 1;
	else if(X<v[(l+r)/2])
		return binarysearch(v,l,(l+r)/2-1,X);
	else return binarysearch(v,(l+r)/2+1,r, X);
}*/

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for(auto &x:v)cin>>x;
		
		//now comes k queries
		for(int i=0;i<k;i++){
			int temp;
			cin>>temp;
			// bool flag=binarysearch(v,0,n-1,temp);
			bool flag=false;
			int l=0,r=n-1;
			while(r>=l){
				int m=(l+r)/2;
				if(temp==v[m]){
					flag=1;
					break;
				}
				else if(temp<v[m])r=m-1;
				else l=m+1;
			}
			if(flag)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}