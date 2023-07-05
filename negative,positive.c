//Write a program, take a number and print whether it is positive or negative. 
//Take all the values from the use.

#include<stdio.h>
int main(){
	int x;
	printf("Enter the value :\n");
	scanf("%d",&x);
	
	if(x>=0){
		printf("%d is positive number\n",x);
	}
	
	else{
		printf("%d is negative number\n",x);
	}
	return 0;
}
