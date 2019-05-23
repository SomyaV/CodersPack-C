#include<stdio.h>
int main(void){
    int i,j,n;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	printf("\n");
    	for(j=1;j<=n+1-i;j++)
    	{
    		printf("%d",j);
		}
	}
}
