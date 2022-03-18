#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		set<int> s;
		for(int i=0;i<5;i++){
			int temp;
			cin>>temp;
			s.insert(temp);
		}
		for(auto x:s)cout<<x<<" ";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}