#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    //call();
    //Start from here
    int n;
    cin>>n;
    if(n!=2 && n!=3){
    	
    	for(int i=2;i<=n;i+=2)cout<<i<<" ";
    	for(int i=1;i<=n;i+=2)cout<<i<<" ";
	}else{
		cout<<"NO SOLUTION";
	}

}
