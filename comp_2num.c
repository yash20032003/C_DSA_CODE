//WAP to find max among 2 numbers. Take all the values from the user

#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the first number :\n");
	scanf("%d",&num1);
	
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("First number is greater then second number \n");
	}
	
	if(num2>num1){
		printf("Second number is greater then first number \n");
	}
	
	else{
		printf("Both numbers are equal \n");
	}
	return 0;
}
