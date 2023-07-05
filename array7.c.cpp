#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n;
	int k=0,l=0;
	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	int arr[n][n];
	int arr1[n][n];
printf("Enter the elements:\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=1;i>=0;i--){
		for(j=0;j<n;j++)
		{
			arr1[l][k]=arr[i][j];
			k++;
			j++;
		}
	}
	l++;
	k=0;
	for(i=1;i>=0;i--){
		for(j=1;j<n;j++){
			arr1[l][k]=arr[i][j];
			k++;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d, ",arr1[i][j]);
		}
		printf("\n");
	}
}
