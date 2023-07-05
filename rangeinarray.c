#include<stdio.h>
#include<stdlib.h>
int arr[7]={2,3,5,5,5,7,10};
int store=-1;
int store1=-1;
int i,j;
void binary(int arr[], int size,int key){
	int start=0;
	int mid;
	int end= size-1;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==key){
		    int i=mid;
			while(i>=0){
				if(arr[i]==key){
					store=i;
				}
				--i;
			}
			
			j=store;
			while(j<7){
				if(arr[j]==key)
				{
					store1=j;
				}
				++j;
			}
		}	
		if(arr[mid]>key){
			end=mid-1;
		}
		if(arr[mid]<key){
			start=mid+1;
		}
	}
}
void main(){
	binary(arr,7,5);
	printf("The element is fount at index :%d,%d",store,store1);

}
