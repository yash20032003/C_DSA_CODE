#include<stdio.h>
#include<stdlib.h>
int arr[12]={2,3,5,5,5,7,7,8,9,9,11,12};
int store=-1;
int binary(int arr[], int size,int key){
	int start=0;
	int end= size-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
		    int i=mid;
			while(i>=0){
				if(arr[i]==key){
					store=i;
				}
				--i;
			}
			if(store>0){
			return store;
			}else{
				return mid;
			}
		}
		if(arr[mid]>key){
			end=mid-1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
	}
	return store;
}
void main(){
	int ret=binary(arr,12,5);
	if(ret==-1){
	printf("The element is not fount.... \n");
}else{
	printf("The element is fount at index :%d",ret);
}
}
