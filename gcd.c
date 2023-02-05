#include<stdlib.h>
#include<stdio.h>

int gcd(int a,int b){
	if(a<b) return gcd(b,a);
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	system("clear");
	printf("Enter the 2 number to find gcd : ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The gcd of numbers %d and %d is %d\n",a,b,gcd(a,b));
	return 0;
}
