#include<stdio.h>
int main()
{
	char a,b;
	printf("Enter the first alphabet...\n");
	scanf("%c",&a);
	printf("Enter the end alphabet...\n");
	scanf(" %c",&b);
	printf("\n");
	if(a>='A' && a<='Z' && b>='A' && b<='Z'){
		for(int i = a; i <= b; i++){
			printf("%c\n", i);
		}
	}else{
		printf("Input Invalid.\n");
	}
}
