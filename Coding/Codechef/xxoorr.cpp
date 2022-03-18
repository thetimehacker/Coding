#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from 
    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	vector<int> arr(33);
    	for(int i=0;i<n;i++){
    		int temp;
    		cin>>temp;
    		while(temp!=0){
    			arr[(int)log2(temp)]++;
    			//cout<<"\nlog 2 of "<<temp<<" is "<<(int)log2(temp);
    			temp=temp-pow(2,(int)log2(temp));
    			//cout<<"\ntemp = "<<temp;
    		}
    		//cout<<endl;
    	}
    	//we have got how many ones are there in specific line
    	int count=0;
    	for(int i=0;i<=n;i++){
    		if(arr[i]%k==0)count+=(arr[i]/k);
    		else count+=(arr[i]/k)+1;
    	}
    	cout<<count<<"\n";
    }

}
