#include<stdio.h>
int main(){
	int marks[3];
	int i;
	printf("Enter your marks of 3 subjects:\n");
	for(i=0;i<3;i++){
		scanf("%d",&marks[i]);
	}
	int sum=0;
	for(i=0;i<3;i++){
	sum=sum+marks[i];
}
	printf("Sum of marks=%d\n",sum);
	int avg=0;
	avg=sum/3;
	printf("The average marks is %d",avg);
}

