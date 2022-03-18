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
    	int n;
    	cin>>n;
    	vector<int> v(n);
    	for(int i=0;i<n;i++)cin>>v[i];
    	sort(v.begin(), v.end());
    	bool flag=true;
    	for(int i=1;i<n;i++){
    		if(abs(v[i]-v[i-1])>1){
    			flag=false;
    			break;
    		}
    	}
    	if(flag)cout<<"YES\n";
    	else cout<<"NO\n";
    }

}
