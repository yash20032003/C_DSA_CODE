//reverse the array??
#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,i,key,count=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array:\n");
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("[");
	for(i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("]");
	printf("\n");
	printf("[");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ,",arr[i]);
	}
	printf("]");
	
}
