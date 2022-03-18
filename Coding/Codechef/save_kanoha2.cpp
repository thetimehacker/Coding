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
    	int n,z;
    	cin>>n>>z;
    	priority_queue<int> p;
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		p.push(temp);
    	}

    	int count=0;
    	bool result=false;
    	while(!p.empty()){
    		if(z<=0){
    			result=true;
    			break;
    		}
    		else{
                // cout<<"z="<<z<<endl;
                // cout<<"top="<<p.top()<<endl;
    			z-=p.top();
                // cout<<"z="<<z<<endl;
    			if(p.top()/2!=0)p.push(p.top()/2);
    			p.pop();
    			count++;
    		}
    	}

    	if(result)cout<<count;
    	else cout<<"Evacuate";
    	cout<<endl;
    }
}
