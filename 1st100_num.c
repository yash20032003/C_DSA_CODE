//2. Write a program to print the first 100 numbers.

#include<stdio.h>
int main(){
	int num,i;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	printf("The first 100 numbers are :\n");
	
	for(i=num;i<=100;i++){
		printf("%d,",i);
	}
	return 0;
}
