#include <stdio.h>
#include <stdlib.h>

char* arr[6]={"yashjyfuf","kunal","pratiktf","abhi","rutu","bala"};

int length(int i)
{
	int count=0;
	while(arr[i][count]!='\0')
	{
		count++;
	}
	return count;	
}
void main()
{
	int i,j,k=0;
	int count=0,count1=0;
	for(i=0;i<6;i++)
	{
		printf("%s ,",arr[i]);
	}
	printf("\n");
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=5;j++)
		{
			count=length(i);
			count1=length(j);
            if(count>=count1)
			{
				char* ch=arr[i];
				arr[i]=arr[j];
				arr[j]=ch;
			}
		}
	}
	printf("\n");
	for(i=0;i<6;i++)
	{
		printf("%s ,",arr[i]);
	}
}
