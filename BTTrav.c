#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}BT;
void insert (BT **p,int num){
	if((*p)==NULL){
		printf("Root node created \n");
		(*p)=malloc(sizeof(BT));
		(*p)->left=NULL;
		(*p)->right=NULL;
		(*p)->data=num;
	}
	else{
		if(num==(*p)->data){
			printf("REPEADED ENTRY!!\n");
			return;
		}
		else if(num>(*p)->data){
			insert(&((*p)->right),num);
		}
		else if(num<(*p)->data){
			insert(&((*p)->left),num);
		}
	}
}
void inorder(struct node *p){
	if(p != NULL){
		inorder(p->left);
		printf("%d  ",p->data);
		inorder(p->right);
	}else return;
}
void postorder(struct node *p){
	if(p != NULL){
		postorder(p->left);
		postorder(p->right);
		printf("%d  ",p->data);
	}else return;
}
void preorder(struct node *p){
	if(p != NULL){
		printf("%d  ",p->data);
		preorder(p->left);
		preorder(p->right);
	}else return;
}

int main(){
	system("clear");
	struct node *ptr;
	int data,choice;
	while(1){
		printf("\nMain Menu\n1.Insert into Binary Tree\n2.Display in preorder\n3.Display in the inorder\n4.Display in postorder\n5.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the data to insert : ");
				scanf("%d",&data);
				insert(&ptr,data);
				break;
			case 2:
				printf("The elements displayed in preorder is :\n");
				preorder(ptr);
				break;
			case 3:
				printf("The elements displayed in inorder is :\n");
				inorder(ptr);
				break;
			case 4:
				printf("The elements displayed in postorder is : ");
				postorder(ptr);
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
