#include<stdio.h>
int main()
{
	int arr[5],i,smallest,largest;
	printf("Enter the array elements:\n");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
}
	smallest=arr[0];
	for(i=0;i<5;i++){
		if(smallest>arr[i]){
			smallest=arr[i];
		}
	}
	printf("The smallest element is %d\n",smallest);
		largest=arr[0];
	for(i=0;i<5;i++){
		if(largest<arr[i]){
			largest=arr[i];
		}
	}
	printf("The largest element is %d",largest);
}
