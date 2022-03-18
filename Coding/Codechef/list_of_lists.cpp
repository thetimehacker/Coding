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
    	//create a vector
    	//its easy to find max
    	vector<int> v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}

    	sort(v.begin(),v.end());

    	vector<int> l(n);
    	for(int i=0;i<n;i++){
    		l[v[i]]++;
    	}

    	int max=0,iterator;
    	for(int i=0;i<n;i++){
    		if(l[i]>max){
    			max=l[i];
    			iterator=i;
    		}
    	}
    	//cout<<"max is : "<<max<<" and element is "<<iterator;

    	if(max>=2){
	    	int count=0;
	    	for(int i=0;i<n;i++){
	    		if(v[i]!=iterator)count++;
	    	}
	    	if(count==0)cout<<0<<"\n";
	    	else cout<<count+1<<"\n";
   		}
   		else {
   			if(n==1)cout<<"0\n";
   			else cout<<"-1\n";
   		}
    }

}
