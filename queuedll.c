#include <stdio.h>
#include <stdlib.h>

int count=0;
typedef struct QNode{
	int pid;
	char pname[20],branch[5],spec[25];

	struct QNode *prev,*next;
}QNode;

typedef struct Queue{
	int size;
	QNode *front;
	QNode *rear;
}Queue;
Queue *getQueue(){
	Queue *new = malloc(sizeof(Queue));
	if(new == NULL)
		return NULL;
	new->front=NULL;
	new->rear=NULL;
	return new;
}

QNode *getQNode(QNode *prev){
	QNode *new = malloc(sizeof(QNode));
	if(new == NULL){
		return NULL;
	}
	printf("Enter the name of the professor : ");
	scanf("%s",new->pname);
	printf("Enter the pid , branch and specialisation : ");
	scanf("%d%s%s",&new->pid,new->branch,new->spec);

	new->next=NULL;
	new->prev=prev;
	return new;
}
void enqueue(Queue *q){
	QNode *node = getQNode(q->rear);
	if(q->front == NULL){
		q->front=node;
		q->size=1;
		count=1;
	}else {
		q->rear->next=node;
		q->size=q->size+1;
		count++;
	}
	q->rear=node;
}
int isempty(Queue *q){
	return (q->size == 0);
}
int getsize(Queue *q){
	return q->size;
}
int peek(Queue *q){
	if(isempty(q))
		return -1;
	return q->front->pid;
}
void dequeue(Queue *q){
	if(isempty(q)){
		printf("The Queue is Empty \n");
		return;
	}
	QNode *temp=q->front;
	int data=peek(q);
	if(q->front==q->rear){
		q->front=NULL;
		q->rear=NULL;
	}else {
		q->front=q->front->next;
	}
	q->size--;
	count--;
	free(temp);
	printf("The deleted Entry from the Queue is : %d\n",data);
}
void printQData(Queue *q){
	QNode *node = q->front;
	while(node != NULL){
		printf("PID\tNAME\t\tBRANCH\t\tSPEC\n");
		printf("%d\t%s\t\t%s\t\t%s\n",node->pid,node->pname,node->branch,node->spec);
		node=node->next;
	}
	printf("Total number of Entries in the Queue are : %d\n",count);
}
int main(){
	int choice;
	Queue *queue=getQueue();
	system("clear");
	printf("\n\t\tQueue Using Double Linked List\n");
	while(1){
		printf("\nEnter your choice :\n1.Add a new Entry\n2.Delete the oldest Entry\n3.Display all the Entries\n4.Exit\n=>");
		scanf("%d",&choice);
		switch(choice){
			case 1:enqueue(queue);break;
			case 2:dequeue(queue);break;
			case 3:printQData(queue);break;
			case 4:exit(0);
			default:
			       printf("Invalid Choice\n");
		}
	}
	return 0;
}
