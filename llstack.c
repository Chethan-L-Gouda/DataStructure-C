#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
	int data;
	struct stack *next;
}node;

node *get_node(int item){
	node *temp = malloc(sizeof(node));
	temp->data=item;
	temp->next=NULL;
	return temp;
}
int stempty(node *top){
	return (top==NULL);
}
int pop(node  **top){
	int item;
	node *temp;
	item = (*top)->data;
	temp = *top;
	*top = (*top)->next;
	free(temp);
	return item;
}
void display(node **head){
	node *temp = *head;
	if(stempty(temp)){
		printf("The stack is Empty\n");
	}
	while(temp != NULL){
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void push(int item,node **top){
	node *New = get_node(item);
	New->next=*top;
	*top=New;
}
int main(){
	node *top;
	top = NULL;
	int item,choice;
	system("clear");
	while(1){
		printf("\nMain Menu\n1.push\n2.pop\n3.display\n4.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the item to be inserted : ");
				scanf("%d",&item);
				push(item,&top);break;
			case 2:
				if(stempty(top)){
					printf("STACK UNDERFLOW!!!\n");
				}else{
					printf("The item popped is %d\n",pop(&top));
				}
				break;
			case 3:
				display(&top);break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
}
