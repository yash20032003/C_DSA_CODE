#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char main()
{
	 char arr[7]={'kunal','yash','rutu','raj','bala'};
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<7-1-i;j++)
		{
			if(strlen(arr[j])>atrlen(arr[j+1])){
				char ch=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=ch;
			}
		}
	}
	for(j=0;j<6;j++){
		printf("%s, ", arr[j]);
	}
	return 0;
}
