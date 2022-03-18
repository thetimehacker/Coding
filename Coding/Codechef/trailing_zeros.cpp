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
    int count=0;
    int max=5;
    if(n<5){
    	cout<<0;
    }else{
    	while(n>=max){
    		count+=n/max;
    		max*=5;
    	}
    	cout<<count;
    }

}
