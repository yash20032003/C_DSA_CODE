#include<stdio.h>
#include<stdlib.h>
void main(){
	int sum=0;
	int sum1=0;
	int sum2=0;
	int sum3=0;
	int arr[3][3],i,j;
	printf("Enter the elements of array\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nsum of rows:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=sum+arr[i][j];
		}
		printf("%d ,",sum);
	}
	printf("\nsum of cols:\n");
	j=0;
	while(j<3){
		for(i=0;i<3;i++){
			sum1=sum1+arr[i][j];
		}
		printf("%d ,",sum1);
		j++;
		sum1=0;
	}
	printf("\nsum of digonal:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
			sum2=sum2+arr[i][j];
		}
		}
	}
		printf("%d",sum2);
	printf("\nsum of minor elements:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i+j)==4){
			sum3=sum3+arr[i][j];
			}
		}
	}
		printf("%d",sum3);
}
