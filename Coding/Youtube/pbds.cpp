#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
void call(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main() {
    call();
    //Start from here

    pbds arr;


    for(int i=0;i<10;i++){
    	arr.insert(i*2);
    }
    for(auto &x:arr)cout<<x<<" ";
    cout<<endl;
    cout<<*arr.find_by_order(4)<<endl;

    cout<<arr.order_of_key(5);
	return 0;
}
