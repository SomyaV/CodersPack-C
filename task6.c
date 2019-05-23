#include<stdio.h>
int main()
{
	int r,num,sum,res;
	printf("Enter a number to check whether an armstrong or not:\n");
	scanf("%d",&num);
	res=num;
	while(res>0){
	r=res%10;
	sum=sum+r*r*r;
	res=res/10;
}
if(num==sum)
printf("The number is armstrong");
else
printf("Not armstrong");
}
