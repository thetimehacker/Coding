#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv) {
	string s1;
	cin>>s1;
    vector<char> arr;
	for(int i=0;i<s1.size();i+=2){
	    arr.push_back(s1[i]);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++){
	    cout<<arr[i];
	    if(i!=arr.size()-1)cout<<"+";
	}
}