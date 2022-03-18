#include <bits/stdc++.h>
using namespace std;
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int b,c;
		cin>>b>>c;
		
		cout<<c/__gcd(b,c);
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}