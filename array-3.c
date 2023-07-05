//reverse the array in particular range??
#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,i,key,key1,count=0;
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
	printf("\nEnter the key:");
	scanf("%d",&key1);
	
	int mid= key+key1/2;
	while(key<key1){
		int a=arr[key];
		arr[key]=arr[key1];
		arr[key1]=a;
		key++;
		key1--;
		mid--;
	}
	
	printf("[");
	for(i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("]");
	
}
