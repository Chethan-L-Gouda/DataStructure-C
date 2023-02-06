#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	char studname[20];
	int sem;
	struct node *next;
}Q;

Q *front,*rear;

Q *get_node(Q *temp){
	temp = malloc(sizeof(Q));
	temp->next=NULL;
	return temp;
}

void insert(){
	Q *temp=NULL;
	temp = get_node(temp);
	printf("Enter the name of the student : ");
	scanf("%s",temp->studname);
	printf("Enter the se  of the student : ");
	scanf("%d",&temp->sem);
	if(front == NULL){
		front=temp;
		rear=temp;
	}
	else{
		rear->next=temp;
		rear=rear->next;
	}
}
int Qempty(Q *front){
	return (front==NULL);
}
Q *delete(){
	Q *temp;
	temp = front;
	if(front == NULL){
		printf("The Queueis Empty,Not possible to Delete.\n");
	}
	else {
		printf("The deleted student details are : \nName : %s\nSem : %d \n",temp->studname,temp->sem);
		front = front->next;
		temp->next=NULL;
		free(temp);
	}
	return front;
}
void display(Q *front){
	if(Qempty(front)){
		printf("Queue is empty,nothing to display\n");
		return;
	}
	printf("The elements in the queue are : \n");
	for(;front != rear->next;front=front->next)
		printf("Name : %s\nSem : %d\n",front->studname,front->sem);
}
Q* search(Q *front){
	Q *temp;
	char student[18]; int found, value;
	temp=front;
	printf("enter the student name to be searched in the List:\n");
	scanf("%s", student);
	if(temp==NULL){
		printf("the linked list is empty\n");
		return NULL;
	}
	found=0;
	while(temp!=NULL && found == 0){
		value=strcmp(temp->studname,student);
		if(value!=0)
			temp=temp->next; 
		else
		found=1;
	}

	if(found==1){
		printf("the student nane is present in the Listin");
		return temp;
	}
	else{
		printf("the student name is not present to the Listin"); 
		return NULL;
	}
}

int main(){
	system("clear");
	front=NULL;
	rear=NULL;
	int choice;
	while(1){
		printf("Queue using LL\n");
		printf("Main Menu\n1.insert\n2.delete\n3.display\n4.search\n5.exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();break;
			case 2:
				delete(front);break;
			case 3:
				display(front);break;
			case 4:
				search(front);break;
			case 5:
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
}
