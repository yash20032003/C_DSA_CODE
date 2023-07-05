#include<stdio.h>
#include<stdlib.h>
int main(){
	int size,count=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	char arr[size];
	int i,j;
	for(i=0;i<size;i++){
		scanf("%s, ",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]=='A')
		{
			for(j=i+1;j<size;j++){
				if(arr[j]=='G'){
					if(i<j)
					{
						count++;
					}
				}
			}
		}
	}
	printf("The total number of substring is: %d",count);
}
