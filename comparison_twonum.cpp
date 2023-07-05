#include<stdio.h>
int main(){
int a,b;
printf("Enter the two numbers...");
scanf("%d %d",&a,&b);
if(a>b)
{
	printf("The first number is greater...");
	}	
	else if(a==b)
	{
		printf("Both number are same...");
	}
	else{
		printf("The second number is greater...");
	}
	return 0;
}

