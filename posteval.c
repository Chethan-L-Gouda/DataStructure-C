#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<string.h>

typedef struct{
	int s[50];
	int top;
}stack;
stack st;
void push(int item){
	st.top++;
	st.s[st.top]=item;
}
int pop(){
	if(st.top != -1){
		int item = st.s[st.top];
		st.top--;
		return item;
	}
	return 0;
}
int posteval(char *exp){
	char c=exp[0];double res =0;
	int count=0;
	while(c != '$'){
		if(c>='0' && c<='9'){
			push(c-48);
		}
		else if(c=='+' || c=='-' || c=='*' || c == '/' || c=='^'){
			int op2=pop(),op1=pop();
			switch(c){
				case '+':res=op1+op2;break;
				case '-':res=op1-op2;break;
				case '*':res=op1*op2;break;
				case '/':res=op1/op2;break;
				case '^':res=pow(op1,op2);
			}
			push(res);
		}
		count++;
		c=exp[count];
	}
	return pop();
}
int main(){
	system("clear");
	st.top=-1;
	char exp[50];
	printf("Enter the postfix expression : ");
	scanf("%s",exp);
	int len = strlen(exp);
	exp[len]='$';
	printf("The result of the evaluation is : %d",posteval(exp));
	return 0;
}
