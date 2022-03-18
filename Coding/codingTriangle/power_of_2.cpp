#include <bits/stdc++.h>
using namespace std;
bool pow2(int n){
	return __builtin_popcount(n)==1;
}
void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<pow2(n);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}