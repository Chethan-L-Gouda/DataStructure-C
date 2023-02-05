#include<stdio.h>
#include<stdlib.h>

int fibo(int n){
	if(n<=1) return n;
	return (fibo(n-1)+fibo(n-2));
}
int main(){
	system("clear");
	int pos;
	printf("Enter the position of the number in the fibonacci series:");
	scanf("%d",&pos);
	printf("The number at the position %d in the fibonacci series is %d\n",pos,fibo(pos));
	return 0;
}
