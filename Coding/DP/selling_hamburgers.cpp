#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>v(n);
		for(auto &x:v){
			cin>>x;
		}
		sort(v.begin(), v.end());
		long long max=0;
		for(int i=0;i<n;i++){
			if(v[i]*(n-i)>max){
				v[i]=v[i]*(n-i);
				max=v[i];
			}
		}
		cout<<max<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}