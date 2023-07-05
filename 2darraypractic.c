#include<stdio.h>
#include<stdlib.h>
void main(){
	int sum=0;
	int size;
//	int sum1=0;
//	int sum2=0;
//	int sum3=0;
printf("Enter the size of array:");
scanf("%d",&size);
	int arr[size][size],i,j;
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int a=(size+size)-1;
	int arr1[size][a];
	for(i=0;i<a;i++){
		for(j=0;j<size;j++){
			arr1[i][j]=0;
		}
		printf("\n");
	}
	for(i=0;i<a;i++){
		for(j=0;j<size;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}
