#include<stdio.h>
int main(){
	int arr[]={235,5,12,3,470,313,65,20};
	int size=sizeof(arr)/sizeof(arr[0]);
	int arr1[10];
	int m=0,l=0,j=0,count=0,count1=0;
	int i,k,temp,temp1;
	printf("Input:");
	for(i=0;i<size;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n");
	int max=arr[0];
	for(i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	while(max>0){
		count1++;
		max=max/10;
	}
	for(k=0;k<count1;k++){
			for(i=0;i<size;i++){
				 temp1=arr[i];
				 temp=temp1;
				while(count<=k){
					 temp=temp1%10;
					temp1=temp1/10;
					count++;
				}
				count=0;
				if(j==temp){
					arr1[m]=arr[i];
					m++;
				}
				if(j==9){
					break;
				}
				if(i==size-1){
					j++;
					i=-1;
				}
			}
		m=0;
		j=0;
		for(i=0;i<size;i++){
			arr[i]=arr1[i];
		}
		printf("\n");
	}
	printf("output:");
	for(i=0;i<size;i++){
	printf("%d,",arr[i]);
	}
	printf("\n");
}
