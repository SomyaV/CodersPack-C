#include<stdio.h>
int main()
{	
	int c,f;
	printf("Enter temperature in celcius:\n");
	scanf("%d",&c);
	f=9*c/5+32;
	printf("The equivalent temperature in farenheit is %d",f);
	return 0;
}
