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
    	int n,m;
    	cin>>n>>m;
    	int count=n-1; //counting the numbers with all one's

    	for(int i=2;i<n;i++){
    		for(int j=i+1;j<=n;j++){
    			if(m%i==m%j)count++;
    		}
    	}

    	cout<<count<<endl;
    }

}
