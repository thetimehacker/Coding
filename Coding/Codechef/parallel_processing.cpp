#include <bits/stdc++.h>
using namespace std;
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>v(n);
		long long sum=0;
		for(auto &x:v){
			cin>>x;
			sum+=x;
		}
		long long avg=sum/2;
		long long avgsum=0;
		long long avgsum2=0;
		for(int i=0;i<n;i++){
			avgsum+=v[i];
			if(avgsum>avg){
				avgsum2=avgsum-v[i];
				break;
			}
		}
		cout<<min(max(sum-avgsum2,avgsum2),max(sum-avgsum,avgsum))<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}