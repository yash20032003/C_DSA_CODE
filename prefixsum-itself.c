#include<stdio.h>
#include<stdlib.h>
int main(){
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	int i,j;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Input:");
	for(i=0;i<size;i++){
		printf("%d ,",arr[i]);
	}
	printf("\nOutput:");
	for(i=1;i<size;i++){
		arr[i]=arr[i-1]+arr[i];
	}
	for(i=0;i<size;i++){
		printf("%d ,",arr[i]);
	}
}
	
