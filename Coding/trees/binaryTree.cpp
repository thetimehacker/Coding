#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node * left=NULL;
	Node * right=NULL;
	Node(int x){
		data=x;
	}
};
Node * find(Node * head, int s){
	if(head==NULL||(head->data==s && (head->left==NULL || head->right==NULL)))return head;
	else{
		Node * newhead1=find(head->left,s);
		Node * newhead2=find(head->right,s);
		
		if(newhead1==NULL && newhead2==NULL)return NULL;
		else if(newhead1==NULL)return newhead2;
		else if(newhead2==NULL)return newhead1;
		else{
			//if both are not null
			if(newhead1->data==s && newhead2->data==s){
				if(newhead1->left==NULL||newhead1->right==NULL)return newhead1;
				else return newhead2;
			}
			else if(newhead1->data==s)return newhead1;
			else return newhead2;
		}
		// if(newhead1->data==s && newhead2->data==s){
		// if(newhead1->data==s && (newhead1->left==NULL||newhead1->right==NULL))return newhead1;
		// else return newhead2;
		
	}
	
}
Node * addNode(Node * head, int temp){
	Node * newnode=new Node(temp);
	if(head==NULL)return newnode;
	else{
		int s;
		cin>>s; //enter parent node of temp
		Node * newhead=head;
		//we will search for s recursively
		
		head=find(head,s);
		if(head==NULL||head->data!=s) cout<<"s not found!!!";
		else{
			if(head->left==NULL)head->left=newnode;
			else if(head->right==NULL)head->right=newnode;
			else cout<<"No space for insertion of "<<temp<<" in "<<s<<endl;
		}
		return newhead;
	}
}
void inorder(Node * head){
	if(head==NULL)return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}
void sol(){
	int n; //number of nodes
	cin>>n;
	Node *  head=NULL;
	while(n--){
		int temp;
		cin>>temp;
		head=addNode(head,temp);
	}
	inorder(head);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}