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
    	int n, height;
    	cin>>n>>height;
    	int count=0;
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		if(temp>height)count++;
    	}
    	cout<<count;
    	cout<<endl;
    }
}
