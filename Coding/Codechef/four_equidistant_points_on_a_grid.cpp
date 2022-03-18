#include <bits/stdc++.h>
using namespace std;
bool perfect(int n){
	return pow(sqrt(n),2)==n;
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n&1)cout<<-1<<endl;
		else{
			if(perfect(n)){
				cout<<0<<" "<<n/2<<endl;
				cout<<0<<" "<<-n/2<<endl;
				cout<<n/2<<" "<<0<<endl;
				cout<<-n/2<<" "<<0<<endl;
			}
			else cout<<-1<<endl;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}