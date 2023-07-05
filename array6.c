#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,cols,rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of cols:");
	scanf("%d",&cols);
	int arr[rows][cols],arr1[rows][cols];
	printf("Enter the first array:\n");
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d,",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			arr1[i][j]=arr[j][i];
		}
	}
	printf("Transpose of array is:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d,",arr1[i][j]);
		}
		printf("\n");
	}
}
