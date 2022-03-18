#include <bits/stdc++.h>
using namespace std;

void sol(){
	string s;
	getline(cin,s);
	vector<string> v;
	stringstream x(s);
	string word;
	while(getline(x,word,' ')){
		v.push_back(word);
	}
	for(auto x:v){
		cout<<x<<endl;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}