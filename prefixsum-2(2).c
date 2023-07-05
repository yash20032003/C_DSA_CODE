#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,query;
	int start,end,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	int i,j;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number of Query:");
	scanf("%d",&query);
	int arr1[query][2];
	printf("Enter the 2D array:");
	for(i=0;i<query;i++){
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n1D array:");
	for(i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n2D array:\n");
	for(i=0;i<query;i++){
		for(j=0;j<2;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nOutput:\n");
		for(i=0;i<query;i++){
		start=arr1[i][0];
		end=arr1[i][1];
		for(j=start;j<=end;j++){
			printf("%d(index:%d) ",arr[j],j);
			sum=sum+arr[j];
		}
		printf("sum=%d",sum);
		printf("\n");
		sum=0;
	}
}
