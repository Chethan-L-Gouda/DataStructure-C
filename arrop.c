#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
int arr[maxsize];
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
void main(){
	int ch;
	while(1){
		printf("Main Menu\n1.Create Array\n2.Display\n3.Exit\n");
		scanf("%d",&ch);
		printf("%d\n",ch);
		switch(ch){
			case 1:create();break;
			case 2:display();break;
			case 3:exit(0);
			default:
			       printf("Invalid Choice\n");
		}
	}
}
