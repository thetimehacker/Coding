#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=8;
		while(n--){
			int temp;
			cin>>temp;
			if((temp-(temp/7))%6==0 || (temp-(temp/8))%7==0){
				
			}
			else count++;
		}
		cout<<count<<endl;
	}
	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}