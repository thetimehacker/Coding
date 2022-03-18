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
    	string ind;
    	cin>>n>>ind;
    	int CONTEST_WON=0;
    	bool TOP_CONTRIBUTOR=false,CONTEST_HOSTED=false;;
    	int BUG_FOUND=0;

    	ll sum=0;
    	for(int i=0;i<n;i++){
    		string s;
    		cin>>s;
    		if(s=="CONTEST_WON"){
    			cin>>CONTEST_WON;
    			sum+=300;
    			if(CONTEST_WON<20)sum+=(20-CONTEST_WON);
    		}
    		else if(s=="TOP_CONTRIBUTOR"){
    			TOP_CONTRIBUTOR=true; //no need of this line
    			sum+=300;
    		}
    		else if(s=="BUG_FOUND"){
    			cin>>BUG_FOUND;
    			sum+=BUG_FOUND;
    		}
    		else if(s=="CONTEST_HOSTED"){
    			CONTEST_HOSTED=true;
    			sum+=50;
    		}
    	}

    	//now we have total number of laddus
    	if(ind=="INDIAN"){
    		cout<<sum/200;
    	}
    	else cout<<sum/400;
    	cout<<endl;
    }

}
