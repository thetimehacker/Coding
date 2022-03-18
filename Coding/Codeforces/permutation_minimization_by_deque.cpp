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
    	deque<int> v;
    	int smallest=-1;
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		if(smallest==-1){
    			smallest=temp;
    			v.push_back(temp);
    		}
    		else{
    			if(temp<smallest){
    				smallest=temp;
    				v.push_front(temp);
    			}
    			else{
    				//if it is not smallest
    				v.push_back(temp);
    			}
    		}
    	}
    	for(auto x:v){
    		cout<<x<<" ";
    	}
    	cout<<endl;
    }

}
