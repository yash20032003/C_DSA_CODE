#include<stdlib.h>
//rotating an array and then finding index of key
#include<stdio.h>
int arr[5]={10,20,30,40,50};
int i,a,j;
int rot;
int key;
int binary(int arr[], int size){
	printf("[10,20,30,40,50]\n");
	printf("Enter the element which you want to find :");
	scanf("%d",&key);
	printf("How many times do you want to rotate an array:");
	scanf("%d",&rot);
	for(i=0;i<rot;i++)
	{
	 a=arr[0];
	for(j=0;j<size;j++)
	{
		arr[j]=arr[j+1];
		}
		arr[size-1]=a;
	}
	int start=0;
	int end= size-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]>key){
			end=mid-1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
	}
	return -1;
}


void main(){
	int k;
	int ret=binary(arr,5);
	if(ret==-1){
	printf("The element is not fount.... \n");
}else{
	printf("[");
	for(k=0;k<5;k++){
		printf("%d ,",arr[k]);
	}
	printf("]\n");
	printf("The %d element is fount at index :%d",key,ret);
}
}
