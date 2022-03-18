#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		deque<int> q;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			q.push_back(temp);
		}
		for(auto x:q){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}