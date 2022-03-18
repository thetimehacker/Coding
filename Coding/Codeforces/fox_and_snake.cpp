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
    int x ,y;
    cin>>x>>y;
    bool right=true;
    if(x%2==0)x-=1;

    for(int i=1;i<=x;i++){
    	if(i%2!=0){
	    	for(int j=0;j<y;j++){
	    		//if i is odd--print full line
	    		cout<<"#";
	    	}
    	}else{
    		if(right){
    			for(int j=0;j<y-1;j++){
	    		//if i is odd--print full line
	    		cout<<".";
	    		}
	    		cout<<"#";
	    		right=false;
    		}
    		else{
    			cout<<"#";
				for(int j=0;j<y-1;j++){
	    		//if i is odd--print full line
	    		cout<<".";
	    		}
	    		right=true;    			
    		}
    	}
    	cout<<endl;
    }

}
