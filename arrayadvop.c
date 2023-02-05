#include<stdio.h>
#include<stdlib.h>
int arr[50];
int size;
void create(){
	int i;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Array Created\n");
}
void display(){
	int i;
	printf("The elements in the array are : ");
	for(i=0;i<size;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}

void insert(){
	int pos,ele,i;
	printf("Enter the position to be inserted at:");
	scanf("%d",&pos);
	printf("Enter the element to be inserted : ");
	scanf("%d",&ele);
	for(i=size;i>pos;i--)
		arr[i]=arr[i-1];
	arr[pos]=ele;
	size++;
}
void delete(){
	int i,pos,ele;
	printf("Enter the the position of the element to be remmoved:");
	scanf("%d",&pos);
	ele=arr[pos];
	printf("The deleted element is %d\n",ele);
	for(i=pos;i<size;i++)
		arr[i]=arr[i+1];
	size--;
}

int main(){
	int ch;
	while(1){
		printf("Enter your choice :\n1.Create\n2.display\n3.insert\n4.delete\n5.exit\n=>");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();break;
			case 2:
				display();break;
			case 3:
				insert();break;
			case 4:
				delete();break;
			case 5:
				exit(0);break;
			default:
				printf("Invalid Choice\n");
		}
	}
}


