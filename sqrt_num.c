//9. WAP to calculate the square root of a number ranging from 100 to 300
#include<stdio.h>
int main(){
	int num,i;
	float result;
	printf("Enter the number that is equal to or greater then 100 and less then 300:");
	scanf("%d",&num);
	
	for(i=num;i<=300;i++){
		result=sqrt(i);
		printf("The square root of %d is %f\n",i,result);
	}
	return 0;
}
