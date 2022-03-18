//permutation problem
#include <bits/stdc++.h>
using namespace std;
vector<string>v;
void permutation(string s,int a){
	if(a==s.size()){
		return;
	}
	for(int i=a;i<s.size();i++){
		string ns=s[i]+permutation(s,a++);
	}
}
void sol(){
	string s;
	cin>>s;
	permutation(s,0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}