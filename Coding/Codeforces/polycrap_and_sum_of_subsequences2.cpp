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
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> v(n);
    	//find maximum
    	int max=0;
    	for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]>max)max=v[i];
    	}

    	//now checking if max is present at corners or not
    	if(v[0]==max||v[n-1]==max){
    		for(int i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
    	}
    	else cout<<-1;
    	cout<<endl;

    }
}
