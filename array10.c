#include<stdio.h>
#include<stdlib.h>
int main(){
	int rows,cols,i,j,k;
	printf("Enter the number of rows");
	scanf("%d",&rows);
	printf("Enter the number of cols");
	scanf("%d",&cols);
	int arr[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(arr[i][j]==0){
				for(k=0;k<rows;k++){
					arr[i][k]=0;
				}
				for(k=0;k<cols;k++){
					arr[k][j]=0;
				}
			}
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
