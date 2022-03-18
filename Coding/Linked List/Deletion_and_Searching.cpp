#include <bits/stdc++.h>
using namespace std;
//creating a linked list
class Node{
public:
	int data;
	Node * next=NULL;
	Node(int x){
		data=x;
	}
};

Node * deletenode(Node*head,int pos){
	//delete node at position pos
	if(pos==1){
		return head->next;
	}
	else {
		Node* newhead=head;
		pos--;
		while(pos>1){
			head=head->next;
			pos--;
		}
		head->next=head->next->next;
		return newhead;
	}
}


Node* insertatend(Node * head, int data){
	Node * newnode=new Node(data);
	if(head==NULL)return newnode;
	else{
		//go to the end of the linked list
		Node* newhead=head;
		while(head->next!=NULL){
			head=head->next;
		}
		head->next=newnode;
		return newhead;
	}
}


bool search(Node* head,int data){
	if(head==NULL)return false;
	else{
		bool result=false;
		while(head->data!=data){
			if(head->next==NULL)return false;
			head=head->next;
		}
		return true;
	}
}

void traverse(Node * head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void sol(){
	int n;
	//number of elments;
	cin>>n;
	Node* head=NULL;
	while(n--){
		int temp;
		cin>>temp;
		head=insertatend(head,temp);
	}
	cout<<"After insertion the elements are : ";
	traverse(head);
	cout<<endl;
	
	int del;
	cin>>del;
	
	head=deletenode(head,del);
	cout<<"After deletion the elements are : ";
	traverse(head);
	
	// cout<<"Enter element to search : ";
	int s;
	cin>>s;
	if(search(head,s))cout<<"Element present"<<endl;
	else cout<<"Element not present"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}