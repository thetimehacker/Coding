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
    int n;
    cin>>n;
    int min=-1,max=-1;

    int count=0;
    while(n--){
    	int temp;
    	cin>>temp;
    	if(min==-1 && max==-1){
    		min=temp;
    		max=temp;
    	}
    	else{
    		if(temp>max){
    			max=temp;
    			count++;
    		}
    		else if(temp<min){
    			min=temp;
    			count++;
    		}
    	}
    }
    cout<<count;

}
