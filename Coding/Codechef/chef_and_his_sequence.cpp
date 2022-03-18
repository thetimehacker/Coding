#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from here
    int t;
    cin>>t;
    while(t--){
    	int n,m;
    	cin>>n;
    	vector <int> v(n);
    	for(int i=0;i<n;i++)cin>>v[i];
    	cin>>m;
    	int s=0,t=n;
    	bool flag=true;
    	int count=0;
    	for(int i=0;i<m;i++){
    		int temp;
    		cin>>temp;
    		for(int j=s;j<t;j++){
    			if(temp==v[j]){
    				count++;
    				if(flag){
    					s=j+1;
    					flag=false;
    				}
    				if(j==n-1){
    					j=0;
    					t=s-1;
    				}
    				break;
    			}
    			
    		}
    	}
    	if(count==m)cout<<"YES\n";
    	else cout<<"NO\n";
    }


}
