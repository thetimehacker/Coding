#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* left=NULL;
	node* right=NULL;
	
	node(int a){
		data=a;
	}
};


void traverse(node * head){
	while(1){
		cout<<head->data<<" ";
		if(head->right!=NULL)
		head=head->right;
		else break;
	}
}
void sol(){
	int t=1;
	cin>>t;
	while(t--){
		//number of nodes we want to create;
		
		int n;
		cin>>n;
		
		// //creation of root node
		int temp;
		// //getting value from user
		cin>>temp;
		// //creating root node using user value
		n--;
		node * root=new node(temp);
		node * newroot=root;
		while(n--){
			//creating other nodes to the right of the tree
			int temp;
			cin>>temp;
			if(temp>root->data){
				root->right=new node(temp);
				root=root->right;
			}
			else{
				root->left=new node(temp);
				root=root->left;
			}			
		}
		
		//now comes traversal
		//traversing the tree by sending the root node
		traverse(newroot);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sol();

}