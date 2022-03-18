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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
    	cin>>v[i];
    }
    int k;
    cin>>k;
    while(k--){
    	int m;
    	cin>>m;
    	vector<int> b(m);
    	for(int i=0;i<m;i++){
    		cin>>b[i];
    	}
		int pos=0;
    	int i=0,j=pos;
    	for(i=0;i<m;){
    		bool found=false;
    		for(j=pos;j<n;j++){
    			if(b[i]==v[j]){
    				pos=j+1;
    				found=true;
    				i++;
    				break;
    			}
    		}

    		if(found==false){
    			//means we were not able to find the element in the whole array
    			break;
    		}
    	}

    	if(i!=m){
    		cout<<"NIE";
    	}else cout<<"TAK";

    	cout<<endl;


    }
}
