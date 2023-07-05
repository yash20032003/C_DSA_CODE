//1. WAP a program to see a given number is a multiple of 3
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	if(num%3==0){
		printf("The entered number is multiple of three\n");
	}
	else{
		printf("The entered number is not a multiple of three\n");
	}
	return 0;
}
