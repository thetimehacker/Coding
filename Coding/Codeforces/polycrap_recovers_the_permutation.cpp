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
    	for(int i=0;i<n;i++
)		{
			cin>>v[i];
			if(v[i]>max)max=v[i];
    	}

    	//now checking if max is present at corners or not
    	if(v[0]==max||v[n-1]==max){
    		vector <int> a;
    		int left=0 ,right=n-1;
    		for(int i=0;i<n;i++){
    			if(v[left]<v[right]){
    				//insert left at the beginning
    				a.insert(a.begin(),v[left]);
    				left++;
    			}
    			else{
    				//insert right at the end
    				a.push_back(v[right]);
    				right--;
    			}
    		}
    		for(auto x:a)cout<<x<<" ";
    	}
    	else cout<<-1;
    	cout<<endl;

    }
}
