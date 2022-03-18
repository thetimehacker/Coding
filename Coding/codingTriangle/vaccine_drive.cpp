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
    	int g,p,n=10;
    	cin>>g>>p;
    	int halfcount=0,totalcount=0;
    	int chefgroupcount=0;
    	for(int i=1;i<=n;i++){
    		int temp;
    		cin>>temp;
    		totalcount+=temp;
    		if(i==g){
    			chefgroupcount=temp;
    			halfcount=totalcount;
    		}
    	}
    	//now number of persons before chef turn 
    	int b=totalcount-halfcount;
    	int nd=b/p+1;
    	//now people in chef's group
    	b+=chefgroupcount;
    	int md=(b%p==0)?(b/p):(b/p+1);
    	cout<<nd<<" "<<md<<endl;
    }
}
