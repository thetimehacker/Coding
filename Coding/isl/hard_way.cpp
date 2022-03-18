#include <bits/stdc++.h>
using namespace std;

void sol(){
	int t=1;
	cin>>t;
	while(t--){
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if(y1==y2){
			if(y3<y2){
				cout<<abs(x2-x1);
			}
			else cout<<0;
		}
		else if(y2==y3){
			if(y1<y2){
				cout<<abs(x2-x3);
			}
			else cout<<0;
		}
		else if(y1==y3){
			if(y2<y3){
				cout<<abs(x1-x3);
			}
			else cout<<0;
		}
		else cout<<0;
		cout<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}