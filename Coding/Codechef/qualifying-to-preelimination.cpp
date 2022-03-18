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
    	ll n,k;
    	cin>>n>>k;
    	vector<int> v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[n];
    	}
    	sort(v.begin(), v.end(),greater<int>());

    	bool result=false;
    	for(int i=0;i<n;i++){
    		if(v[i]>=v[k]){
    			//do nothing
    		}
    		else{
    			result=true;
    			cout<<i;
    			break;
    		}
    	}
    	if(!result)cout<<n;
    	cout<<endl;

    }

}
