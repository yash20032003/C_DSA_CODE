//3. Write a program to print the first ten, 3 digit number

#include<stdio.h>
int main()
{
	int num,num1,i;
	printf("Enter the first three digit number : ");
	scanf("%d",&num);
	
	printf("Enter the last three digit number : ");
	scanf("%d",&num1);
	
	printf("\nThe Three digit numbers are :\n");
	for(i=num;i<=num1;i++){
		printf("%d\n",i);
	}
	return 0;
}
