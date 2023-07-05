//1. Write a program to print the first 10 capital Alphabets.

#include<stdio.h>
int main(){
	char a,b;
	int i;
	
	printf("Enter the first alphabet...\n");
	scanf("%c",&a);
	
	printf("Enter the end alphabet...\n");
	scanf(" %c",&b);
	
	if(a>='A' && a<='Z' && b>='A' && b<='Z'){
		for( i = a; i <= b; i++){
			printf("%c\n", i);
		}
	}
	else{
		printf("Input Invalid.\n");
	}
	return 0;
}
