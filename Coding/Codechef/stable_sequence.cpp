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
    	vector<int> v(n);
    	int max=0,pos=-1;
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    		if(v[i]>=max){
    			max=v[i];
    			pos=i;
    		}
    	}

    	//check if every element is equal or not
    	bool eq=true;
    	for(int i=1;i<n;i++){
    		if(v[i]!=v[i-1]){
    			eq=false;
    			break;
    		}
    	}
    	if(eq)cout<<0;
    	else if(pos==n-1)cout<<1;
    	else{
    		cout<<2;
    	}
    	cout<<endl;
    }

}
