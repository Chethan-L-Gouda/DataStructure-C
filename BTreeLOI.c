#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *left,*right; 
}Node;

Node *newNode(int data){
	Node *new=malloc(sizeof(Node));
	new->data=data;
	new->left=new->right=NULL;
	return (new);
}

Node *insertlevelorder(int arr[],int i,int n){
	Node *root=NULL;
	if(i<n){
		root=newNode(arr[i]);
		root->left=insertlevelorder(arr,2*i+1,n);
		root->right=insertlevelorder(arr,2*i+2,n);
	}
	return root;
}
void inorder(Node *p){
	if(p != NULL){
		inorder(p->left);
		printf("%d  ",p->data);
		inorder(p->right);
	}else return;
}

int main(){
	int arr[]={1,2,3,4,5,6},n=6;
	Node *root=insertlevelorder(arr,0,n);
	inorder(root);
}
