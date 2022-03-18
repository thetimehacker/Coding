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
	if(head==NULL)return ;
	else{
		while(head!=NULL){
			cout<<head->data<<" ";
			head=head->next;
		}
	}
}

Node * swapnodes(Node * head,int x,int y){
	Node * newhead=head;
	Node * prevx=NULL;
	while(newhead->data!=x){
		prevx=newhead;
		newhead=newhead->next;
	}
	newhead=head;
	Node * prevy=NULL;
	while(newhead->data!=y){
		prevy=newhead;
		newhead=newhead->next;
	}
	
	Node* xhead=prevx->next;
	Node* yhead=prevy->next;
	prevx->next=yhead;
	// prevx->next->next=prevy->next->next;
	prevy->next=xhead;
	Node* temp=xhead->next;
	xhead->next=yhead->next;
	yhead->next=temp;
	
	return head;
	
}

void sol(){
	int n;
	cin>>n;
	
	Node * head=NULL;
	Node * newhead=NULL;
	while(n--){
		int temp;
		cin>>temp;
		Node * newnode=new Node(temp);
		
		if(head==NULL){
			head=newnode;
			newhead=newnode;
		}
		else{
			newhead->next=newnode;
			newhead=newhead->next;
		}
		
	}
	//traversing the list
	traverse(head);
	
	//swapping the locations
	int x,y;
	cin>>x>>y;
	head=swapnodes(head,x,y);
	
	cout<<"\nAfter swapping : "<<endl;
	traverse(head);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}