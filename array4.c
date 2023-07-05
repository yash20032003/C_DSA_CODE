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
   while(j<=rows){
   	for(i=1;i<=cols;i++){
   		if((i+j)==rows+1){
   			sum=sum+arr[j][i];
		   }
	   }
	   j++;
   }
printf("sum:%d",sum);	
}
