#include<stdio.h>
#include<stdlib.h>
int count=0;
int factor(int num){
	int i;
	count=0;
	for(i=1;i<=num;i++)
	{
		if((num%i)==0){
			count++;
		}
	}
}

int sort(int size){
	int arr[size];
	int j,i,min;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
	factor(arr[i]);	
	min=count;
		for(j=0;j<size;j++){
			factor(arr[j]);
			int a=count;
			if(min<a){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
			if(min==a){
				if(arr[i]<arr[j]){
					int temp1=arr[j];
				arr[j]=arr[i];
				arr[i]=temp1;
				}
			
			}
			a=0;
		}
		min=0;
	}
	printf("Output:");
	for(i=0;i<size;i++){
		printf("%d,",arr[i]);
	}
}
void main(){
	int size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	sort(size);
}
