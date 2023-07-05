#include<stdio.h>
#include<stdlib.h>
void main(){
	char* arr[6]={"FHfo","FDfrg","H","4","2","N"};
	int i,k=0,j;
	for(i=0;i<=5;i++){
		for(j=0;j<=5-i;j++){
			int ch=arr[j][k];
			int ch1=arr[j+1][k];
			if(ch==ch1)
			{
				k++;
			}
			if(ch>ch1){
				char* ch2=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=ch2;
			}
		}
	}
	for(i=0;i<=5;i++)
	{
		printf("%s ,",arr[i]);
	}
}
