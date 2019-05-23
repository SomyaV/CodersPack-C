#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter a string to check for palindrome:\n");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0){
		printf("The string you entered is a palindrome");
	}
	else
	printf("The string entered is not a palindrome");	
}
