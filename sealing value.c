//sealing value(least greatest and higher then key value )
#include<stdlib.h>
int arr[5]={6,7,8,10,20};
int store=-1;
int binary(int arr[], int size,int key){
	int start=0;
	int end= size-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			return key;
		}
		if(arr[mid]>key){
			store=arr[mid];
			end=mid-1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
	}
	return store;
}
void main(){
	int ret=binary(arr,5,22);
	printf("The floar value is :%d",ret);
}
