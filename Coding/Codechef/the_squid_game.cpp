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
    	sort(v.begin(), v.end(),greater<int>());
    	ll sum=0;
    	for(int i=0;i<n-1;i++)sum+=v[i];
    	cout<<sum;
    	cout<<endl;
    }

}
