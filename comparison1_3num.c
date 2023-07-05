// 3: WAP to find min among 3 numbers

#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the second number :");
	scanf("%d",&num2);
	printf("Enter the third number :");
	scanf("%d",&num3);
	
	if(num1<num2 && num1<num3){
		printf("First number is smaller\n");
	}
	else if(num2<num1 && num2<num3){
		printf("Second number is smaller\n");
	}
	else if(num3<num1 && num3<num1){
		printf("Third number is smaller\n");
	}
	else{
		printf("wrong input\n");
	}
	return 0;
}
