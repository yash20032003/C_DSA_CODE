#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int arr[5]={1,3,10,7,12};
static int count=0;
bool array(int arr[],int n,int size)
{
	
	if(arr[n]%2==0)
	{
		count++;	
	}
	if(count==2)
	{
		return true;
	}
	if(n==size)
	{
		return false;
	}
	array(arr,n+1,size);
	
}

void main(){
 bool ret= array(arr,0,5);
 printf("%d",ret);
}
