#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Start from here
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n][n];
    	int count=0;
    	for(int i=0;i<n;i++){
    		string s;
    		cin>>s;
    		for(int j=0;j<n;j++){
    			string temp;
    			temp+=s[j];
    			arr[i][j]=stoi(temp);
    			if(arr[i][j]==1)count++;
    		}
    	}

    	cout<<"Value of count after first iteration "<<count<<"\n";

    	int value=1;
    	while(value<n){
    		for(int i=0;i<n-value;i++){
    			for(int j=0;j<n-value;j++){
    				bool flag=true;
    				for(int k=j;k<=value+i;k++){
    					if(arr[i][k]!=1){
    						flag=false;
    						break;
    					}
    				}

    				if(flag){
    					for(int k=j;k<=value+i;k++){
    						if(arr[i][k+i]!=1){
    							flag=false;
    							break;
    						}
    					}
    				}

    				if(flag){
    					for(int k=i+1;k<=(j+value)-1;k++){
    						if(arr[j][k]!=1){
    							flag=false;
    							break;
    						}
    					}
    				}

    				if(flag){
    					for(int k=i+1;k<=(j+value)-1;k++){
    						if(arr[j+value][k]!=1){
    							flag=false;
    							break;
    						}
    					}
    				}

    				if(flag)count++;
    				cout<<"i "<<i<<" j "<<j<<" count "<<count<<"\n";
    			}
    		}
    		cout<<"value "<<value<<"\n";
    		value++;
    	}
    	cout<<count<<"\n";
    }

}
