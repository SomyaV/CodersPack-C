#include<stdio.h>
int main(){
	int age;
	float phno;
	char name;
	printf("Enter your name:\n");
	scanf("%s",&name);
	printf("Enter your phone number:");
	scanf("%f",&phno);
	printf("Enter your age");
	scanf("%d",&age);
	printf("The name,phone number and age are %s,%f,%d",name,phno,age);
}
