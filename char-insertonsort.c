#include<stdio.h>
#include<stdlib.h>
void main(){
	char* arr[6]={"Raj","Rahul","A","BB","Datha","Kunal"};
	int i,j;
	for(i=1;i<=5;i++){
		char* store=arr[i];
		int num=arr[i];
		j=i-1;
		for( ;j>=0;j--)
		{
			int num1=arr[j];
			if(num<num1)
			{
				arr[j+1]=arr[j];
			}
		}
		arr[j+1]=store;
	}
	for(i=0;i<=5;i++)
	{
		printf("%s ,",arr[i]);
	}
}
