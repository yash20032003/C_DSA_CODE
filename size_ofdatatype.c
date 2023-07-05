#include<stdio.h>
int main()
{
	int x;
	float y;
	char z;
	printf("Enter the interger value:\n");
	scanf("%d",&x);
	printf("Enter the float value:\n");
	scanf("%f",&y);
	printf("Enter the chatacter value:\n");
	scanf("%c",&z);
	printf("The value of integer is %d and its size is",x,sizeof(x));
	printf("The value of float is %f and its size is",y,sizeof(y));
	printf("The value of character is %c and its size is",z,sizeof(z));
	return 0;
}
