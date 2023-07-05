#include<stdio.h>
#include<stdlib.h>
int main(){
	int size;
	int count=0,count1=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	int i,j;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			count++;
		}else{
			count1++;
		}
	}
int arr2[count1];
int arr1[count];
int a=0,b=0;
for(i=0;i<size;i++){
		if(arr[i]%2==0){
			arr1[a]=arr[i];
			a++;
		}else{
			arr2[b]=arr[i];
			b++;
		}
	}
	printf("Even array:");
	for(i=0;i<count;i++){
		printf("%d, ",arr1[i]);
	}
	printf("\n");
	printf("Odd array:");
	for(j=0;j<count1;j++){
		printf("%d, ",arr2[j]);
	}
	printf("\n");
	int count2=0;
	for(i=0;i<count;i++){
		if(arr1[i]%5==0){
			count2++;
		}
	}
	if(count2==count-1){
		for(i=0;i<count;i++){
			for(j=i+1;j<count;j++){
				if(arr1[i]<arr1[j]){
					int temp=arr1[i];
					arr1[j]=arr1[i];
					arr1[i]=temp;
				}
			}
		}
		printf("output1:");
		for(i=0;i<count;i++){
			printf("%d ,",arr1[i]);
		}
		for(i=0;i<count1;i++){
			printf("%d ,",arr2[i]);
		}
	}else if(count2==0){
		printf("output2:");
	for(i=count-1;i>=0;i--){
			printf("%d ,",arr1[i]);
		}
		for(i=0;i<count1;i++){
			printf("%d ,",arr2[i]);
		}
	}else{
	    int count3=0,count4=0;
		printf("output3:");
		for(i=0;i<count;i++){
		if(arr1[i]%5==0){
			count3++;
		}else{
			count4++;
		}
	    }
        int arr3[count3];
        int arr4[count4];
        int c=0,d=0;
        for(i=0;i<count;i++){
		if(arr1[i]%5==0){
			arr3[c]=arr1[i];
			c++;
		}else{
			arr4[d]=arr1[i];
			d++;
		}
	    }
		printf("\n");
	    for(i=0;i<count3;i++){
			for(j=i+1;j<count3;j++){
				if(arr3[i]<arr3[j]){
					int temp=arr3[i];
					arr3[i]=arr3[j];
					arr3[j]=temp;
				}
			}
		}
		for(i=0;i<count3;i++){
			printf("%d ,",arr3[i]);
		}
		for(i=count4;i>0;i--){
			printf("%d ,",arr4[i]);
		}
		for(i=0;i<count1;i++){
			printf("%d ,",arr2[i]);
		}
	}
	
}
