#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int max=0;int min=-1;
	int mm=0, nm=0;
	int sum=0;
	for(int i=0;i<n;i++){
	    int temp;
	    cin>>temp;
	    if(temp>max){
	        max=temp;
	        mm=i;
	    }
	    if(min==-1){
	        min=temp;
	        nm=i;
	    }
	    else if(temp<=min){
	        min=temp;
	        nm=i;
	    }
	}
	if(mm-nm==0)cout<<0;
	else if(mm-nm<0)
	{
	    sum+=mm;
	    sum+=n-nm-1;
	}
	else {
	    sum+=mm;
	    sum+=n-nm-2;
	}
	cout<<sum;
}
