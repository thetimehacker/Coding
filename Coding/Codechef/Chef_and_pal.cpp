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
    	if(n%2!=0)cout<<-1;
    	else{
    		for(int i=0;i<n;i++){
    			if(i%2==0)cout<<0;
    			else cout<<1;
    		}
    	}
    	cout<<"\n";
    }

}
