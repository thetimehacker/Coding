#include <bits/stdc++.h>
using namespace std;

void sort(stack<int> &s){
	//just adding the elements of stack to another stack
	
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		stack<int> s;
		int n;
		cin>>n;
		//number of elements
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			s.push(temp);
		}
		
		cout<<"before sorting : ";
		for(auto x:s)cout<<x<<" ";
		
		
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}