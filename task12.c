#include<stdio.h>
int main(){
	int choice=0,temp=0;
	printf("Enter a choice\n1.Celcius to Farenheit\n2.Farenheit to Celcius\n3.Exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the temperature:\n");
			scanf("%d",&temp);
			temp=9/5*temp+32;
			printf("The temperature in Farenheit is %d",temp);
			break;
		case 2:
			printf("Enter the temperature:\n");
			scanf("%d",&temp);
			temp=(5*temp)/9-32;
			printf("The temperature in Celcius is %d",temp);
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("Invalid choice");
	}
}
