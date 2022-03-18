#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector <string> sub;
void prime(int i)
{
	int flag;
	
		if (i == 1 || i == 0){

		}
		else{
		flag = 1;
		for (int j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			v.push_back(i);
	}
	
}

void printSubsequence(string input, string output)
{
    if (input.empty()) {
        sub.push_back(output);
        return;
    }

    printSubsequence(input.substr(1), output + input[0]);
    printSubsequence(input.substr(1), output);
}
 

void sol(){
	string s;
	cin>>s;
	string output = "";
    string input = s;
 
    printSubsequence(input, output);

    // for(auto x:sub)cout<<x<<" ";
	
	for(auto x:sub){
		stringstream ss(x);
		int a = 0;
   		ss >> a;
		prime(a);

	}
	int sum=0;
	// for(auto x:v){
	// 	cout<<x<<" ";
	// }
	sort(v.begin(), v.end(),greater<int>());
	if(v.size()<10){
		for(auto x:v)sum+=x;
	}
	else {
		for(int i=0;i<10;i++)sum+=v[i];
	}
	cout<<sum;
}

int main() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    //Start from here
    
    sol();

}

