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

Node * addNode(int temp, Node * head){
	Node * t= new Node(temp);
	if(head==NULL)return t;
	else{
		Node * newhead = head;
		while(1){
			if(temp==head->data)break;
			if(temp<head->data){
				if(head->left==NULL){
					head->left=t;
					break;
				}
				else head=head->left;
			}
			else{
				if(head->right==NULL){
					head->right=t;
					break;
				}
				else head=head->right;
			}
		}
		return newhead;
	}
}

//traversing
//Inorder traversal
void inorder(Node * head){
	if(head==NULL)return;
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}
void sol(){
	int n; //number of nodes;
	cin>>n;
	Node * head=NULL;
	while(n--){
		int temp;
		cin>>temp;
		head=addNode(temp,head);
	}
	cout<<endl<<"inorder traversal : ";
	inorder(head);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}