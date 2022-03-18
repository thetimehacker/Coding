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
    	int sum=0;
    	for(int i=0;i<7;i++){
    		int temp;
    		cin>>temp;
    		if(i==0||i==1){
    			cout<<temp<<" ";
    			sum+=temp;
    		}
    		else if(i==6){
    			cout<<temp-sum;
    		}
    	}
    	cout<<endl;
    }

}
