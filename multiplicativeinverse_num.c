//WAP to print the numbers in a given range and their multiplicative inverse.
//Suppose x is a number then its multiplicative inverse or reciprocal is 1/x.

#include<stdio.h>
int main(){
	int num;
	float res,i;
	printf("Enter the number in the range of 1-5 :");
	scanf("%d",&num);
	
	for(i=num;i<=5;i++){
		res=(1/i);
		printf("The number is %f and its multiplicative inverse is 1/%f = %f\n",i,i,res);
	}
	return 0;
}
