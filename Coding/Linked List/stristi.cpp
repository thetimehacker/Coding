#include <bits/stdc++.h>
using namespace std;

ListNode* mergeTwoLists(ListNode*a, ListNode*b){
	if(!a && !b)return a;
	vector<int> v;
	while(a){
		v.push_back(a->val);
		a=a->next;
	}
	while(b){
		v.push_back(b->val);
		b=b->next;
	}
	sort(v.begin(),v.end());
	//creating a new list
	ListNode * head=new ListNode(-1);
	ListNode* newhead=head;
	for(auto x:v){
		newhead->next=new ListNode(x);
		newhead=newhead->next;
	}
	return head->next;
	
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}