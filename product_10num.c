//10. Write a program to print the product of the first 10 numbers

#include<stdio.h>
int main(){
	int i;
	int temp=1;
	for( i=1;i<=10;i++){
		temp=temp*i;
	}
	printf("The total product of the first 10 number is : %d",temp);
	return 0;
}
