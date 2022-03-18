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
    int count=0;
    int untreated=0;
    while(n--){
    	int temp;
    	cin>>temp;
    	count+=temp;
    	if(count<0){
    		untreated++;
    		count=0;
    	}
    }
    cout<<untreated;

}
