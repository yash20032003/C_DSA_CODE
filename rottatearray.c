#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n,i,j;
    char y;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int arr[n];
	int a,b;
	printf("Enter the element of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements of array:\n");
	for(i=0;i<n;i++){
	printf("%d,",arr[i]);
	}
	printf("\nHow many times do you want to rotate:");
	scanf("%d",&a);
	for(j=0;j<a;j++){
		int c=arr[0];
		for(i=0;i<n;i++){
			arr[i]=arr[i+1];
		}
		arr[n-1]=c;
	}
	printf("Output:\n");
	for(i=0;i<n;i++){
	printf("%d,",arr[i]);
	}
}
