//Multiplication Table
#include<stdio.h>
int main(){
	int n,i,m;
	printf("Enter an integer to print its multiplication table:\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
	m=n*i;
	printf("%d*%d=%d\n",n,i,m);
}
}
