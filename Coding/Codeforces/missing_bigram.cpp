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
    	vector<string> v;
    	string temp;
    	while(cin>>temp){
    		v.push_back(temp);
    	}

    	//lets try to print all the chars 

    	//for(auto &x: v)cout<<x<<" ";

    	//take a new vector
    	vector<char> c;
    	bool flag=false; // not updated the array 
    	c.push_back(v[0][0]);
    	for(int i=0;i<v.size()-1;i++){
    		if(v[i][1]==v[i+1][0])c.push_back(v[i][1]);
    		else {
    			c.push_back(v[i][1]);
    			if(!flag){
    				c.push_back(v[i+1][0]);
    				flag=true;
    			}
    		}
    	}
    	c.push_back(v[v.size()-1][1]); // last element

    	if(c.size()!=n)c.push_back(v[v.size()-1][1]);  
    	for(auto &x: c)cout<<x;
    	cout<<endl;

    }

}
