#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a, b, c; cin >> a >> b >> c;
	    auto f = [&](int i, int j, int k) {
	      if(i > max(j, k)) return 0;
	      return max(j, k) + 1 - i;
	    };
	    cout << f(a, b, c) << " " << f(b, a, c) << " " << f(c, a, b) << "\n";
	}
}
