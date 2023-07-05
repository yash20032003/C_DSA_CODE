// how many element greater then the elements in an array??
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
	printf("\nEnter the key:");
	scanf("%d",&key);
	for(i=0;i<size;i++){
		if(arr[i]>key){
			count++;
		}
	}
	if(count>0){
	printf("The number of elements greater then key values are: %d",count);
	}else{
		return -1;
	}
	
}
