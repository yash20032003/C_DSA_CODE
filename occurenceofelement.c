//how many times and element aoocue and at which indexs element occure
#include<stdio.h>
#include<stdlib.h>
int arr[6]={40,10,40,60,50,40};
int i,j=-1,k=-1;
int count=0;
int store;
int binary(int arr[], int size,int key){
	int start=0;
	int end= size-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			count++;
			j=mid;
			while(j>=0){
				if(arr[j]==key){
					store=j;
				}
				--j;
			}
			i=store;
			printf("The element if found at index :[");
		    while(i<=size){
				if(arr[i]==key)
				{
					k=i;
					count++;
					printf("%d,",k);
				}
				i++;
			}
			printf("]\n");
			return count-1;
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
	int ret=binary(arr,6,40);
	printf("The element is found:%d\n",ret);
}

