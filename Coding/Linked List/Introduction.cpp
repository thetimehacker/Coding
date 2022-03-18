#include <bits/stdc++.h>
using namespace std;
//insertion in a linked list
class Node{
public:
	int data;
	Node* next=NULL;
	Node(int x){
		data=x;
	}
};

Node * insertatbeginning(Node * head, int data){
	Node * newnode=new Node(data);
	newnode->next=head;
	return newnode;
}
Node * insertatend(Node*head,int data){
	Node* newnode=new Node(data);
	if(head==NULL)return newnode;
	else {
		Node * newhead=head;
		while(head->next!=NULL){
			head=head->next;
		}
		head->next=newnode;
		return newhead;
	}
}

Node * insertafter(Node*head,int data,int element){
	Node* newnode=new Node(data);
	if(head==NULL)return insertatbeginning(head,data);
	else{
		bool result=true;
		Node* newhead=head;
		while(head->data!=element){
			if(head==NULL){
				result=false;
				break;
			}
			head=head->next;
		}
		if(result){
			newnode->next=head->next;
			head->next=newnode;
			return newhead;
		}
		else return insertatend(newhead,data);
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
	cin>>n;
	
	Node * head=NULL;
	//0 for first 
	//1 for after element
	//2 for end
	
	while(n--){
		int choice;
		cin>>choice;
		
		int temp;
		cin>>temp;
		if(choice==0){
			head=insertatbeginning(head,temp);
		}
		else if(choice==2){
			head=insertatend(head,temp);
		}
		else{
			int element;
			cin>>element;
			head=insertafter(head,temp,element);
		}
	}
	
	//finally traverse the list
	traverse(head);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}