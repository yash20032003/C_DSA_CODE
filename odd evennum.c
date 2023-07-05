//Write a program to check if a number is even or odd. Take all the values from the user

#include<stdio.h>
int main()
{
	int x;
	printf("Enter the value :\n");
	scanf("%d",&x);
	
	if(x%2==0){
		printf("%d is even number \n",x);
	}
	
	else{
		printf("%d is odd number \n",x);
	}
	return 0;
}

