//Reverse of a number
#include<stdio.h>
int main()
{
	int a=0,rev=0,r=0;
	printf("Enter a number:\n");
	scanf("%d",&a);
	while(a>0){
	r=a%10;
	rev=rev*10+r;
	a=a/10;
}
	printf("The reverse of the given number is %d:\n",rev);
}
