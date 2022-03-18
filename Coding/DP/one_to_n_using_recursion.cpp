#include <bits/stdc++.h>
using namespace std;
void recursion(int n){
	if(n==0)return;
	else{
		cout<<n<<" ";
		recursion(n-1);
	}
}

void recursion_start(int n){
	if(n==0)return;
	else{
		recursion_start(n-1);
		cout<<n<<" ";
	}
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		recursion(n);
		cout<<endl;
		recursion_start(n);
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}