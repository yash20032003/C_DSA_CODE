#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,j,k,minindex;
	int arr[5]={10,20,-4,6,2};
	for(i=0;i<5-1;i++){
		minindex=i;
		for(j=i+1;j<5;j++){
			if(arr[minindex]>arr[j])
			{
				minindex=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
	for(k=0;k<5;k++)
	{
		printf("%d,",arr[k]);
	}
}
