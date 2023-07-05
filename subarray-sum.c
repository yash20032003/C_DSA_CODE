#include<stdio.h>
#include<stdlib.h>
	int i,j,k;
int subarray(){
	int size,ret;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int sum,subsum=0;
	printf("Enter the sum:");
	scanf("%d",&sum);
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			for(k=i;k<=j;k++){
				subsum=subsum+arr[k];
		}
			if(subsum==sum){
			printf("The subarra is founded from %d to %d",i,k-1);
			return 0;
			}
			subsum=0;
		}
	}
}
int main(){
    int ret=subarray();
	if(ret!=0){
		printf("The subarra is not founded");
	}
}
