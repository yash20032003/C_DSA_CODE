#include<stdio.h>
#include<stdlib.h>
int count=0;
void main(){
	printf("0->red\n");
	printf("1->white\n");
	printf("2->blue\n");
	int size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	int a,b=0;
	int i,j;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(a=0;a<3;a++){
			for(j=0;j<size;j++){
				if(arr[j]==a){
					int temp=arr[j];
					arr[j]=arr[b];
					arr[b]=temp;
					b++;
				}
			}
		}
		printf("output:");
		for(i=0;i<size;i++){
		printf("%d ,",arr[i]);
	}

}
