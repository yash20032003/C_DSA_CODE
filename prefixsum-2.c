#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,query;
	int start,end,count=0;
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
		int count=0;
		for(j=start;j<=end;j++){
			if((arr[j]%2)==0)
			{
				count=count+1;
			}
			printf("%d(index:%d) ",arr[j],j);
		}
		printf("(It contain %d even numbers)",count);
		printf("\n");
	}
}
	
	
