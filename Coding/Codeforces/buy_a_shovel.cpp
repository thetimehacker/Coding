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
    int cost,r;
    cin>>cost>>r;
    int count=0;
    bool flag=false;
	for(int i=1;i<=10;i++){
    	int temp=cost*i;
    	if(temp%10==r || temp%10==0){
    		count=i;
    		flag=true;
    		break;
    	}
	}
	if(flag)cout<<count;
	else cout<<10;
    
    

}
