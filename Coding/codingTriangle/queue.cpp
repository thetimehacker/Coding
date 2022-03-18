#include <bits/stdc++.h>
using namespace std;

void show(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
void sol(){
	int t=1;
	// cin>>t;
	while(t--){
		queue<int> q;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			q.push(temp);
		}
		//traverse
		show(q);
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}