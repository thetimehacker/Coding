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
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}

    	//take a new vector and sort it
    	vector<int> a=v;
    	sort(a.begin(), a.end());
    	//for(auto x:a)cout<<x<<" ";

    	vector<int> start,end,abso;

    	//now start comparing vector a and v
    	for(int i=0;i<n;i++){
    		//this is sorted vector a
    		for(int j=i;j<n;j++){
    			if(a[i]==v[j] && i!=j){
    				//cout<<i+1<<" "<<j+1<<" "<<abs(i-j)<<endl;
    				//string ts=(i+1)+' '+(j+1)+' '+abs(i-j)
    				start.push_back(i+1);
    				end.push_back(j+1);
    				abso.push_back(abs(i-j));
    				//above was the first step
    				//now to rearrance vector v 
    				int temp=v[j];
    				for(int k=j;k>i;k--){
    					v[k]=v[k-1];
    				}
    				v[i]=temp;
    				break;
    			}
    		}
    	}

    	cout<<start.size()<<endl;
    	for(int i=0;i<start.size();i++){
    		cout<<start[i]<<" "<<end[i]<<" "<<abso[i]<<endl;
    	}


    }

}
