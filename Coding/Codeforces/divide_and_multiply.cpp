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
    	vector <int> v(n);
    	for(int i=0;i<n;i++)cin>>v[i];
    	sort(v.begin(), v.end(),greater<int>());
    	int two=0;
    	int count=0;
    	for(int i=1;i<n;i++){
    		if(v[i]%2==0){
    			two +=v[i]/2;
    			count+=1;
    		}
    		else count+=v[i];
    	}
    	ll ans=v[0]*pow(2,two)+count;
    	cout<<ans<<endl;

    }

}
