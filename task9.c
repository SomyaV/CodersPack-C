//Factorial
#include<stdio.h>
int main(){
	int n,i,fact;
	printf("Enter a  number to find its factorial:\n");
	scanf("%d",&n);
	
	for(i=n-1;i>=1;i--){
		n=n*i;
	}
	printf("The factorial of the entered number is %d:\n",n);
	}
