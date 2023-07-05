#include<stdio.h>
#include<stdlib.h>
/*
void fun(int x){
	printf("%d\n",x);
	if(x!=1){
		fun(--x);
	}
}
int num=0;
void sum(int x){
	printf("The number is %d\n",x);
	num=num+x;
	if(x!=1){
		sum(--x);
	}
	printf("The sum of the %d numbers: %d\n",x,num);
}

void fun(int x){
	printf("Hello\n");
	if(x!=1){
		fun(--x);
		printf("Bye\n");
	}
}

int num=1;
void mult(int x){
	printf("the number is %d\n",x);
	num=num*x;
	if(x!=1){
		mult(--x);
	}
	printf("The multiplication of %d number is %d\n",x,num);
}
int num=1;
int mult(int x){
	printf("the number is %d\n",x);
	num=num*x;
	if(x!=1){
		mult(--x);
	}
    return num;
    
}
int factorial(int n){
 static int mult=1;
	if(n==1 || n==0){
		return mult;
	}
	mult=mult*n;
	return factorial(--n);
	
}

int factorial(int n){
 static int mult=1;
	if(n<=1){
		return 1;
	}
	mult=mult*n;
	return factorial(n-1)*n;
}
*/
int factorial(int n){
 static int mult=1;
 printf("%d\n",n);
	if(n<=1){
		return 1;
	}
	return factorial(n-1)+factorial(n-2);
}
void main(){
	/*
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	sum(a);
	*/
	/*
	mult(5);
	int ret=num;
	printf("The factorial of the number is %d:\n",num);
	*/
	/*
	int x= factorial(0);
	printf("The factorial is %d",x);
*/
   int x = factorial(3);
	printf("The sum is %d",x);

	
}
