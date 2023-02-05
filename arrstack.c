#include<stdio.h>
#include<stdlib.h>
#define size 5

typedef struct {
	int s[size];
	int top;
}stack;

stack st;

int stfull(){
	return (st.top>=size-1);
}
int stempty(){
	return (st.top == -1);
}
void push(int item){
	if(stfull()){
		printf("STACK OVERFLOW!!\n!");
		return;
	}
	st.top++;
	st.s[st.top]=item;
	printf("%d was inserted into the stack\n",item);
}
int pop(){
	if(stempty()){
		printf("STACK UDERFLOW!!!\n");
		return -9999;
	}
	int item = st.s[st.top];
	st.top--;
	return item;
}
void display(){
	if(stempty()){
		printf("The stack is empty,no items to display\n");
		return;
	}
	printf("The items in the stack are :");
	int i;
	for(i=st.top;i>=0;i--)
		printf("%d  ",st.s[i]);
	printf("\n");
}
int main(){
	system("clear");
	int ch,item;
	st.top=-1;
	while(1){
		printf("Enter your choice :\n1.push\n2.pop\n3.display\n4.exit\n=>");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter the item to be inserted : ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				item = pop();
				if(item != -9999)
					printf("The item popped is %d\n",item);
			case 3:
				display();break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
