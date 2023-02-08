#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int pid;
	char pname[20],branch[5],spec[25];
	struct node *prev,*next;
}StackNode;

StackNode *top;
int count;

void push(){
	StackNode *temp=malloc(sizeof(StackNode));
	if(!temp){
		printf("Failed to allocate memory!\n");
		return;
	}
	printf("Enter the name of the professor : ");
	scanf("%s",temp->pname);
	printf("Enter the pid ,branch and specialization of the professor : ");
	scanf("%d%s%s",&temp->pid,temp->branch,temp->spec);
	count++;

	if(top==NULL){
		temp->next = NULL;
		temp->prev = NULL;
		top=temp;
	}else {
		top->next=temp;
		temp->prev=top;
		top=temp;
	}
}
void pop(){
	int a;
	if(top==NULL){
		printf("The stack is empty,nothing to pop\n");
		return;
	}else if (top->prev ==NULL && top->next == NULL) {
		a=top->pid;
		StackNode *temp;
		temp=top;
		top=NULL;
		free(temp);
	}else{
		StackNode *temp;
		temp=top;
		a=top->pid;
		top=top->prev;
		top->next=NULL;
		free(temp);
	}
	printf("The deleted element is : %d",a);
	count--;
}
void display(){
	StackNode *temp=top;
	if(temp==NULL){
		printf("The Stack is Empty,Nothing to display!\n");
		return;
	}
	while(temp != NULL){
		printf("PID\tPNAME\t\tBRANCH\tSPEC\n");
		printf("%d\t%s\t\t%s\t%s\n",temp->pid,temp->pname,temp->branch,temp->spec);
		temp=temp->prev;
	}
	printf("\nThe Total number of Entries in the stack is : %d\n",count);
}
int main()
{
	int choice;
	system("clear");
	while(1){
		printf("\nEnter your choice:\n1.Add a new Entry\n2.Pop the last Entry\n3.Display all Entries\n4.Exit\n=>");
		scanf("%d",&choice);
		switch(choice){
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
			default:
			       printf("Invalid choice\n");
		}
	}
	return 0;
}

