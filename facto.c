#include<stdio.h>
#include<stdlib.h>

int facto(int n){
	if (n<0) {
		printf("Negative numbers does not have factorials.\n");
		return 0;
	}
	if(n==1 || n==0) return 1;
	return n*facto(n-1);
}
int main(){
	system("clear");
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("The Factorial of %d = %d! = %d",n,n,facto(n));
	return 0;
}
