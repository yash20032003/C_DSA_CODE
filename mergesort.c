#include<stdio.h>
#include<stdlib.h>
int n;
void sort(int arr[n],int start,int mid,int end){
	int i;
	int ele1=mid-start+1;
	int ele2=end-mid;
	int arr1[ele1],arr2[ele2];
	for(i=0;i<ele1;i++){
		arr1[i]=arr[start+i];
	}
	for(i=0;i<ele2;i++){
		arr2[i]=arr[mid+1+i];
	}
	int itr1=0,itr2=0,itr3=start;
	while(itr1<ele1 && itr2<ele2){
		if(arr1[itr1]<arr2[itr2]){
			arr[itr3]=arr1[itr1];
			itr1++;
		}else{
			arr[itr3]=arr2[itr2];
			itr2++;
		}
		itr3++;
	}
	while(itr1<ele1){
		arr[itr3]=arr1[itr1];
		itr1++;
		itr3++;
	}
	while(itr2<ele2){
		arr[itr3]=arr2[itr2];
		itr2++;
		itr3++;
	}
}
void merge(int arr[n],int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		merge(arr,start,mid);
    	merge(arr,mid+1,end);
		sort(arr,start,mid,end);
	}
}
int main(){
	int i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
	merge(arr,0,n-1);
	
	printf("The elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ,",arr[i]);
	}
}
