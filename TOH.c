#include<stdio.h>
#include<stdlib.h>

void towers(int n,char from,char to,char aux){
	if(n==1){
		printf("Move disc 1 from %c peg to %c peg\n",from,to);
		return;
	}
	towers(n-1,from,aux,to);
	printf("Move disc %d from %c peg to %c peg\n",n,from,to);
	towers(n-1,aux,to,from);
}
int main(){
	system("clear");
	int n;
	printf("\nTower Of Honai\n");
	printf("Enter the number of discs: ");
	scanf("%d",&n);
	towers(n,'A','C','B');
	return 0;
}
