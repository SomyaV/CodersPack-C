#include<stdio.h>
struct book{
	char title[20];
	char author[20];
	char genre[15];
};
display();
int main()
{
	display();
}
display()
{
	struct book b1;
	printf("Enter the title:\n");
	scanf("%s",&b1.title);
	printf("Enter the author name:\n");
	scanf("%s",&b1.author);
	printf("Enter the genre:\n");
	scanf("%s",&b1.genre);
	printf("The title of the book is %s\nThe author of the book is %s\nThe genre of the book is %s\n",b1.title,b1.author,b1.genre);
	
}
