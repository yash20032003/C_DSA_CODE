#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,cols,rows;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of cols:");
	scanf("%d",&cols);
	int arr[rows][cols],arr1[rows][cols],arr2[rows][cols];
	printf("Enter the first array:\n");
		for(i=1;i<=rows;i++){
		for(j=1;j<=cols;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for(i=1;i<=rows;i++){
		for(j=1;j<=cols;j++){
			printf("%d,",arr[i][j]);
		}
		printf("\n");
	}
   j=0;
   int sum=0;
   j=1;
   while(j<=3){
   	for(i=1;i<=3;i++){
   		sum=sum+arr[j][i];
	   }
	   printf("cols sum %d :%d\n",j,sum);
	   j++;
   }
	
}
