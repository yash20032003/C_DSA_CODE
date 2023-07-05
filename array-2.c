//if i!=j & arr[i]+arr[j]==b element the it is good array else it is bad array
#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,i,key,j,count=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array:\n");
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The first array is :[");
	for(i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("]");
	
	printf("\nEnter the key:");
	scanf("%d",&key);
	for(i=0;i<size;i++){
		for(j=1;j<size;j++){
		if(i!=j && arr[i]+arr[j]==key){
			count++;
		}
	}
	}
	if(count>0){
	printf("This is good array");
	}else{
	printf("This is a bad array");
	}
	
}
