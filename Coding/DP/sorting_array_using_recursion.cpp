#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &v,int n){
	if(n==1)return;
	else{
		if(v[n-1]<v[n-2]){
			swap(v[n-1],v[n-2]);
			sort(v,n-1);
		}
	}
}
void sortarray(vector<int> &v,int n){
	if(n==0)return;
	else{
		sortarray(v,n-1);
		sort(v,n);
	}
}

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(auto &x:v){
			cin>>x;
		}
		
		//sort this array using recursion 
		sortarray(v,v.size());
		//print the vector
		for(auto x:v)cout<<x<<" ";
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}