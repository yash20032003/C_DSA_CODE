//peak element(key should be greater then its previous and next element or if corner element array are greater then they are peak)
#include<stdio.h>
#include<stdlib.h>
int arr[5]={10,20,30,40,50};
int count=0;
int count1=0;
int i,j;
int binary(int arr[], int size,int key){
	int start=0;
	int end= size-1;
	while(start<=end){
		int mid=start+end/2;
		if(arr[mid]==key){
		    if(arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]){
			return arr[mid];
		}
		for(i=1;i<size;i++)
		{
			if(arr[0]>arr[i])
			{
				count++;
			}
		}
		for(j=1;j<size;j++)
		{
			if(arr[size-1]>arr[i])
			{
				count1++;
			}
		}
		
		if(count==size-2)
		{
			return arr[0];
		}
		if(count1=size-2){
			return arr[size-1];
		}
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
	int ret=binary(arr,5,30);
	if(ret==-1){
	printf("There is no peak element \n");
}else{
	printf("%d  is the peak element",ret);
}
}
