//rotate the array??
#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,i,j,key,count=0;
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
	printf("\nHow many times you want to rotate the array:");
	scanf("%d",&key);
   for(j=1;j<=key;j++){
   	int a=arr[0];
   	for(i=0;i<size-1;i++){
   		arr[i]=arr[i+1];
	   }
	   arr[size-1]=a;
   }
   printf("[");
	for(i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("]");
}
