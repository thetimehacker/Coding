#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next=NULL;
	Node(int x){
		data=x;
	}
};
void traverse(Node * head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void sol(){
	int n;
	cin>>n;
	Node * head=NULL;
	Node * t=head;
	while(n--){
		int temp;
		cin>>temp;
		Node * node=new Node(temp);
		if(t==NULL){
			head=node;
			t=node;
		}
		else{
			t->next=node;
			t=t->next;
		}
	}
	traverse(head);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}